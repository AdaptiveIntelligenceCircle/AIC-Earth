#include "earth_collector.h"
using namespace std; 

namespace aic :: earth :: observability :: signals
{
    void SignalCollector :: collect(const EarthSignal &signal)
    {
        signals_.push_back(signal); 
    }

    size_t SignalCollector :: countHighSeverity(double threshold) const 
    {
        size_t count = 0; 
        for (const auto &s : signals_)
        {
            if (s.severity >= threshold)
            count++; 
        }
        return count; 
    }
}