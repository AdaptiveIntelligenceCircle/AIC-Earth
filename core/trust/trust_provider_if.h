#pragma once 
#include "trust_query.h"

using namespace std; 

namespace aic :: trust
{
    class ITrustProvider
    {
        public:
        virtual ~ITrustProvider() = default; 

        virtual bool hasTrust(
            const TrustQuery &query
        ) const =0; 
    };
} // namespace aic :: trust