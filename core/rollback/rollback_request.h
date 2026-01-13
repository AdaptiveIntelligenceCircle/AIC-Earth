#pragma once 
#include <string>

#include "rollback_reason.h"
using namespace std; 

namespace aic :: rollback
{
    struct RollbackRequest
    {
        RollbackReason reason; 
        string target_id; 
        string context_snapshot; 

        bool initiated_by_human; 

        RollbackRequest(RollbackReason r, 
        const string &target, 
        const string &snapshot, 
        bool human = false)
        : reason(r), 
        target_id(target), 
        context_snapshot(snapshot), 
        initiated_by_human(human){}
    }; 
}