#pragma once 

#include "simulation/earth/common/simulation_result.h"
using namespace std; 

namespace aic :: earth :: simulation :: social 
{
    struct TrustInput
    {
        int number_of_agents;
        double trust_decay_rate; 
        bool central_actor_present; 
    }; 

    class TrustCollapseSimulation
    {
        public: 
        SimulationResult run(const TrustInput &input) const;
    }; 
} // namespace aic :: earth :: simulation :: social.. 