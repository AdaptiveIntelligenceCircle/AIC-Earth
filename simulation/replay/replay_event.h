#pragma once
#include <string> 
#include <iostream>
#include <unordered_map>
using namespace std; 

namespace aic :: earth :: replay
{
    enum class ReplayEventType
    {
        DECISION, 
        POLICY_CHANGE, 
        TRUST_SHIFT, 
        CONFLICT, 
        EXTERNAL_SHOCK, 
        ROLLBACK
    }; 

    struct ReplayEvent
    {
        uint64_t timestamp; 
        ReplayEventType type; 
        string actor_id; 
        string description; 

        unordered_map<string, double> metrics; 
        unordered_map<string, string> context; 
    };
}