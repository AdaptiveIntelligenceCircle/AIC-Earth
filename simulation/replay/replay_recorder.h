#pragma once 
#include "replay_timeline.h"

using namespace std; 

namespace aic :: earth :: replay
{
    class ReplayRecorder
    {
        public: 
        void record(const ReplayEvent &event); 
        ReplayTimeline snapshot() const; 

        void reset(); 

        private: 
        ReplayTimeline timeline_; 
    }; 
}