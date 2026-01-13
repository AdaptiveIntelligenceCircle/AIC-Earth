#pragma once 
#include <string> 
using namespace std; 

namespace aic :: earth
{
    enum class HumanDecision
    {
        APPROVE, 
        REJECT, 
        DEFER
    };  

    class IHumanOverride
    {
        public: 
        virtual ~IHumanOverride() = default; 

        virtual HumanDecision requestHumanReview
        (
            const string &reason, 
            const string &context 
        ) = 0; 
    };
} // namespace aic :: earth.. 