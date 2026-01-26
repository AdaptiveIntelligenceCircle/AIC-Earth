#include "manipulation_pressure_sim.h"

using namespace std; 

namespace aic :: earth :: simulation :: cognitive 
{
    void ManipulationPressureSimulator:: record(const InfluenceAttempt &attempt)
    {
        attempts_.push_back(attempt); 
    }

    double ManipulationPressureSimulator :: pressureIndex() const 
    {
        if (attempts_.empty()) return 0.0; 

        double sum = 0.0;
        for (const auto &a : attempts_)
        {
            sum+= (a.repitition * 0.4 + 
            a.emotional_load * 0.4 + 
            a.authority_bias *0.2); 
        }

        sum /= attempts_.size(); 

        if (sum > 1.0) sum = 1.0; 
        return sum; 
    }

    bool ManipulationPressureSimulator :: exceedSafeLimit() const 
    {
        return pressureIndex() >= 0.6; 
    }

    void ManipulationPressureSimulator :: reset()
    {
        attempts_.clear(); 
    }
}