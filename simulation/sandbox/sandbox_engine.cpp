#include "sandbox_engine.h"
using namespace std; 

#include <iostream>

namespace aic :: earth :: sandbox
{
    void SandboxEngine :: loadContext(const SandboxContext &ctx)
    {
        context_ = ctx; 
    }

    void SandboxEngine :: addAgent(const SandboxAgent &agent)
    {
        agents_.push_back(agent); 
    }

    void SandboxEngine :: addPolicy(const SandboxPolicy &policy)
    {
        policies_.push_back(policy); 
    }

    void SandboxEngine :: step()
    {
        applyPolicies(); 
    }

    void SandboxEngine :: reset()
    {
        agents_.clear(); 
        policies_.clear(); 
    }

    void SandboxEngine :: applyPolicies()
    {
        for (const auto &policy : policies_){
            for (auto &agent : agents_){
                bool result = policy.evaluate(agent.belief("risk")); 
                cout << "Sandbox - policy" << policy.name()
                << "on agent" << agent.id() << "->" 
                << (result ? "ALLOW" : "DENY") << endl; 
            }
        }
    }
}