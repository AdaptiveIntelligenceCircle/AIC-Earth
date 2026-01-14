#pragma once 
#include <string> 

#include <vector> 
using namespace std; 

namespace aic :: earth :: simulation
{
    struct SimulationSignal
    {
        string name; 
        double value; 
    }; 

    struct SimulationResult
    {
        string simulation_name; 
        bool risk_detected; 

        vector<SimulationSignal> signals; 
        string narrative_summary; 
    }; 
} // namespace aic :: earth :: simulation.. 