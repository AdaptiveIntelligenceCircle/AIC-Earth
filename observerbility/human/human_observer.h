#pragma once 

#include <vector> 
#include "human_signal.h"

namespace aic :: earth :: observability :: human
{
    class HumanObserver
    {
        public: 
        void observe(const HumanSignal &signal); 
        const vector<HumanSignal> &signals() const; 

        double trustDelta() const; 

        private: 
        vector<HumanSignal> signals_; 
    }; 
}