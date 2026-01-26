#include "decision_fatigue_sim.h"

using namespace std; 

namespace aic :: earth :: simulation :: cognitive 
{
    void DecisionFatigueSimulator :: ingest(const DecisionEvent &event)
    {
        history_.push_back(event); 
    }

    double DecisionFatigueSimulator :: fatigueScore() const 
    {
        if (history_.empty()) return 0.0; 
        
        double score = 0.0; 
        for (const auto &e : history_)
        {
            score += (e.complexity *0.6 + e.urgency * 0.4); 
        }

        // nomarlize by number of decisions.. 
        score /= history_.size(); 

        // soft saturation.. 
        if (score > 1.0) score = 1.0; 
        return score; 
    }

    bool DecisionFatigueSimulator :: isCritical() const 
    {
        return fatigueScore() >= 0.7; 
    }

    void DecisionFatigueSimulator :: reset()
    {
        history_.clear(); 
    }
} 