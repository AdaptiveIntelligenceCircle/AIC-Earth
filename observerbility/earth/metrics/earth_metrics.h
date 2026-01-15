#pragma once 
#include <string> 
using namespace std; 

namespace aic :: earth :: observability :: metrics
{
    enum class EarthMetricType
    {
        STABILITY, 
        TRUST, 
        CONFLICT, 
        ADAPTABILITY, 
        FRAGILITY
    }; 

    struct EarthMetric
    {
        EarthMetricType type; 
        double value; // normalized 0.0 - 1.0 
        string source; // simulation | replay | human | policy
    }; 
}