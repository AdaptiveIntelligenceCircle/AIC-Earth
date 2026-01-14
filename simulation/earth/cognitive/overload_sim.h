#pragma once 
#include "earth/common/simulation_result.h"

using namespace std; 

namespace aic :: earth :: simulation::cognitive
{
    struct CognitiveInput
    {
        int decisions_per_hour;
        int concurrent_information_stream; 
        bool conflicting_narratives; 
    }; 

    class CognitiveOverloadSimulation
    {
        public : 
        SimulationResult run(const CognitiveInput &input) const; 
    }; 
} // namespace aic :: earth :: simulation :: cognitive.. 