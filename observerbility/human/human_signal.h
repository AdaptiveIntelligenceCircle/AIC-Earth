#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth :: observability :: human
{
    enum class HumanSignalType
    {
        CONFUSION, 
        DISAGREEMENT, 
        TRUST_DROP, 
        APPROVAL,
        ESCALATION_REQUEST 
    }; 
    
    struct HumanSignal
    {
        string human_id; 
        HumanSignalType type;
        string message; 
        double intensity; // 0.0 -> 1.0 
    }; 
}