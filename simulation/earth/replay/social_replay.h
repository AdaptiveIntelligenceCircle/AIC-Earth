#pragma once 
#include <vector>
#include "simulation/earth/common/simulation_result.h"

using namespace std; 

namespace aic :: earth :: simulation :: replay
{
    class SocialReplay
    {
        public: 
        SimulationResult replay(
            const vector<SimulationResult> &history)const; 
        
    }; 
} // namespace aic :: earth :: simulation :: replay..