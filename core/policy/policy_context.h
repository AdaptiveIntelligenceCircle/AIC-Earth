#pragma once 
#include <string> 
#include "../core/earth/earth_context.h"
using namespace std; 

namespace aic :: policy
{
    struct PolicyContext
    {
        string policy_domain; 
        aic :: earth :: EarthContext earth; 

        bool high_risk_operation; 
        bool affects_multiple_agents; 

        PolicyContext(): 
        high_risk_operation(false), 
        affects_multiple_agents(false){}
    };
} // namespace aic :: policy.