#pragma once 

#include "simulation/earth/common/simulation_result.h"
using namespace std; 

namespace aic :: earth :: simulation :: scale
{
    struct ScaleInput
    {
        int initial_agents; 
        int growth_rate;
        bool constraints_enabled; 
    }; 

    class RapidScaleSimulation
    {
        public: 
        SimulationResult run(const ScaleInput &input) const; 
    }; 
} // namespace aic :: earth :: simulation :: scale. 