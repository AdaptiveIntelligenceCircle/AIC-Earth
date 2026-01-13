#pragma once 
#include <string>
using namespace std; 

namespace aic :: earth
{
    enum class ConstraintSeverity
    {
        SOFT, 
        HARD,
        FATAL
    }; 

    struct EarthConstraint
    {
        string name; 
        string description; 
        ConstraintSeverity severity; 

        bool requires_human_review; 
        bool rollback_mandatory; 

        EarthConstraint (const string &n, 
        const string &d, 
        ConstraintSeverity s, 
        bool human_review = false, 
        bool rollback = false) : 
        name(n), 
        description(d), 
        severity(s), 
        requires_human_review(human_review),
        rollback_mandatory(rollback){}
    }; 
} // namespace aic :: earth.. 