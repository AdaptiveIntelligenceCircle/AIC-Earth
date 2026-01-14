#pragma once 
#include "replay_timeline.h"

using namespace std; 

namespace aic :: earth :: replay
{
    class ReplayAnalyzer
    {
        public: 
        double calculateInstability(const ReplayTimeline &timeline) const; 
        size_t countConflicts(const ReplayTimeline &timeline) const; 
    };  
}