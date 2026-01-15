#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth :: sandbox
{
    class SandboxGuard
    {
        public: 
        bool allowEscalation(double instability_score) const; 
    }; 
}