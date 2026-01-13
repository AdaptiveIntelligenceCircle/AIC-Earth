#pragma once 
#include <string> 

using namespace std; 

namespace aic :: policy
{
    enum class PolicyStrength
    {
        ADVISORY, 
        STRONG, 
        CRITICAL
    };

    struct PolicyRule
    {
        string id; 
        string description; 
        PolicyStrength strength; 

        bool requires_human_review;
        bool rollbackable; 

        PolicyRule(const string &pid, 
        const string &desc, 
        PolicyStrength s, 
        bool human = false, 
        bool rollback = true):
        id (pid), 
        description(desc),
        strength(s),
        requires_human_review(human),
        rollbackable(rollback) {}
    }; 
}