#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth :: observability :: signals
{
    enum class EarthSignalType
    {
        ANOMALY, 
        ESCALATION, 
        TRUST_EROSION, 
        SYSTEM_STRESS
    }; 

    struct EarthSignal
    {
        EarthSignalType type; 
        string description; 
        double severity; 
    };
}