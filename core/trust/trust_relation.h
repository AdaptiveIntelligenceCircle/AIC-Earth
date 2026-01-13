#pragma once 
#include <string> 

#include <chrono>
#include "trust_domain.h"

using namespace std; 

namespace aic :: trust
{
    struct TrustRelation
    {
        string from; 
        string to; 
        TrustDomain domain; 

        chrono :: system_clock :: time_point expires_at; 

        bool expired() const
        {
            return chrono :: system_clock :: now() > expires_at; 
        }
    }; 
} // namespace aic :: trust 