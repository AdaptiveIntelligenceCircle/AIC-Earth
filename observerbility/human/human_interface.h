#pragma once 
#include <string> 

using namespace std ; 

namespace aic :: earth :: observability :: human
{
    class HumanInterface
    {
        string explainDecision(const string &decision, 
        const string &relationale) const; 

        string explainRisk(double risk_score) const; 
    }; 
}