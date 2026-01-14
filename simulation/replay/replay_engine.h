#pragma once 
#include "replay_timeline.h"

namespace aic :: earth :: replay
{
    class ReplayEngine
    {
        public: 
        void loadTimeline(const ReplayTimeline &timeline); 

        void replayForward();
        void replayBackward(); 

        void JumpTo(size_t index); 

        private: 
        ReplayTimeline timeline_; 
        size_t cursor_ = 0; 
        void applyEvent(const ReplayEvent &event, bool forward); 
    }; 
}