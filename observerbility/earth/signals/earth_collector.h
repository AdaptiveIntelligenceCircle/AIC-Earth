#pragma once 
#include <vector>
#include "earth_signal.h"

using namespace std; 

namespace aic :: earth :: observability :: signals
{
    class SignalCollector
    {
        public: 
        void collect(const EarthSignal &signal); 
        size_t countHighSeverity(double threshold) const; 

        private: 
        vector<EarthSignal> signals_; 
    };
}