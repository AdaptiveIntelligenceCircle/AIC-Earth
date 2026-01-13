#pragma once 
#include "rollback_request.h"

#include "rollback_state.h"
using namespace std; 

namespace aic :: rollback
{
    class IRollbackManager
    {
        public: 
        virtual ~IRollbackManager() = default; 
        
        virtual RollbackState currentState(
            const string &target_id
        ) const = 0; 

        virtual bool requestRollback(
            const RollbackRequest &request
        ) = 0; 
    }; 
// namespace aic :: rollback.. 
}