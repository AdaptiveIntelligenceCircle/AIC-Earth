#pragma once 
#include <vector> 

#include "human_signal.h"
using namespace std; 

namespace aic :: earth :: observability :: human
{
    class HumanAudit
    {
        public: 
        void log(const HumanSignal &signal); 
        size_t escalationCount() const; 

        private: 
        vector<HumanSignal> audit_log_; 
    }; 
}
