#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth 
{
    enum class TrustDomain
    {
        TECHNICAL, 
        SOCIAL, 
        ECONOMIC, 
        GOVERNANCE 
    }; 

    class ITrustTopology
    {
        public: 
        virtual ~ITrustTopology() = default; 

        virtual bool hasTrust
        (const string &from, 
        const string &to, 
        TrustDomain domain) const = 0; 

        virtual bool trustExpired(
            const string &from,
            const string &to, 
            TrustDomain domain
        ) const = 0; 
    }; 
}