#pragma onde 
#include <string> 

#include "trust_domain.h"
using namespace std;

namespace aic :: trust
{
    struct TrustQuery
    {
        string from; 
        string to; 
        TrustDomain domain;
    };  
}