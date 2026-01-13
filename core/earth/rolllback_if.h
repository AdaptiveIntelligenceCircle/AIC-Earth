#pragma once 
#include <string>

using namespace std; 

namespace aic :: earth 
{
    enum class RollbackReason
    {
        POLICY_VIOLATION, 
        TRUST_COLLAPSE, 
        HUMAN_OVERRIDE, 
        UNEXPECTED_SCALE
    }; 

    class IRollbackCapable
    {
        public: 
        virtual ~IRollbackCapable() = default; 

        virtual bool canRollback() const = 0; 

        virtual bool requestRollback(
            RollbackReason reason, 
            const string &context
        ) = 0; 
    }; 
}