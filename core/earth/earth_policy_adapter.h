#pragma once 
#include "earth_constraints.h"

using namespace std; 

namespace aic :: earth
{
    class IEarthPolicyAdapter
    {
        public: 
        virtual ~IEarthPolicyAdapter() = default; 

        virtual bool evaluateConstraint(
            const EarthConstraint &constraint
        ) const = 0; 
    }; 
} // namespace aic :: earth.. 