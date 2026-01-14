#pragma once 
#include "replay_timeline.h"

namespace aic :: earth :: replay
{
    class ReplayEngine
    {
        public: 
        void loadTimeline(const ReplayTimeline &timeline); 

        void replayForward();
    }; 
}