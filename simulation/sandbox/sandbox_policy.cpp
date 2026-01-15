#include "sandbox_policy.h"
using namespace std; 

namespace aic :: earth :: sandbox
{
    SandboxPolicy :: SandboxPolicy(string name)
    : name_(move(name)){}

    bool SandboxPolicy :: evaluate(double input) const 
    {
        // placeholer logic - policy complexity grows later.. 
        return input > 0.5; 
    }

    const string &SandboxPolicy :: name() const 
    {
        return name_; 
    }
}