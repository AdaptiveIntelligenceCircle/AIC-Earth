#pragma once 
#include <vector> 

#include "replay_event.h"
using namespace std; 

namespace aic :: earth :: replay
{
    class ReplayTimeline
    {
        public: 
        void addEvent(const ReplayEvent &event); 
        const vector<ReplayEvent> &events() const; 

        void clear(); 
        size_t size() const; 

        private: 
        vector<ReplayEvent> timeline_; 
    }; 
}