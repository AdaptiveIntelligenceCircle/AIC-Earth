#pragma once 
#include <iostream>

#include <string> 

namespace aic :: rollback
{
    enum class RollbackReason
    {
        POLICY_FAILURE, 
        TRUST_VIOLATION, 
        HUMAN_OVERRIDE, 
        UNEXPECTED_SCALE, 
        UNKNOWN_BEHAVIOR
    }; 
} // namespace aic :: rollback.. 