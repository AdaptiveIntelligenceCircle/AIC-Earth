#include "human_audit.h"
using namespace std; 

namespace aic :: earth :: observability :: human 
{
    void HumanAudit:: log(const HumanSignal &signal)
    {
        audit_log_.push_back(signal); 
    }

    size_t HumanAudit :: escalationCount() const 
    {
        size_t count = 0; 
        for (const auto &s : audit_log_)
        {
            if (s.type == HumanSignalType :: ESCALATION_REQUEST){
                count++; 
            }
        }
        return count; 
    }
}