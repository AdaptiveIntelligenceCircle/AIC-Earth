#pragma once 

#include <string> 
#include <unordered_map>

using namespace std; 

namespace aic :: earth :: sandbox
{
    struct SandboxContext
    {
        string scenario_id; 
        string description;

        unordered_map<string, double> global_metrics; 
        unordered_map<string, string> assumptions; 
    }; 
} // namespace aic :: earth :: sandbox