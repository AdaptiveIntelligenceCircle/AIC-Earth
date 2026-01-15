#include "human_observer.h"
using namespace std; 

namespace aic :: earth :: observability :: human 
{
    void HumanObserver :: observe(const HumanSignal &signal)
    {
        signals_.push_back(signal); 
    }

    const vector<HumanSignal> &HumanObserver :: signals() const 
    {
        return signals_ ; 
    }

    double HumanObserver :: trustDelta() const 
    {
        double delta = 0.0; 

        for (const auto &s : signals_)
        {
            if (s.type == HumanSignalType :: TRUST_DROP)
            delta -= s.intensity; 
            else if(s.type == HumanSignalType :: APPROVAL)
            delta += s.intensity; 
        }
        return delta; 
    }
}