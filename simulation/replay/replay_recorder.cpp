#include "replay_recorder.h"
using namespace std; 

namespace aic :: earth :: replay
{
    void ReplayRecorder :: record(const ReplayEvent &event)
    {
        timeline_.addEvent(event); 
    }

    ReplayTimeline ReplayRecorder :: snapshot() const 
    {
        return timeline_; 
    }

    void ReplayRecorder :: reset()
    {
        timeline_.clear(); 
    }

}