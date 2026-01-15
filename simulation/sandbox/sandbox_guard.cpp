#include "sandbox_guard.h"
using namespace std; 

namespace aic :: earth :: sandbox
{
    bool SandboxGuard ::allowEscalation(double instability_score) const 
    {
        // prevent unsafe promotion from sandbox to reality ..
        return instability_score < 0.3; 
    }
}