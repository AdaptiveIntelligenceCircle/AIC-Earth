#pragma once 
#include <vector> 

#include "sandbox_context.h"
#include "sandbox_agent.h"

#include "sandbox_policy.h"
using namespace std; 

namespace aic :: earth :: sandbox
{
    class SandboxEngine
    {
        public: 
        void loadContext(const SandboxContext &ctx); 

        void addAgent(const SandboxAgent &agent); 
        void addPolicy(const SandboxPolicy &policy); 

        void step(); 
        void reset(); 

        private: 
        SandboxContext context_; 
        vector<SandboxAgent> agents_; 
        vector<SandboxPolicy> policies_; 

        void applyPolicies(); 
    }; 
}