#include "replay_timeline.h"

using namespace std; 

namespace aic :: earth :: replay
{
    void ReplayTimeline ::addEvent(const ReplayEvent &event)
    {
        timeline_.push_back(event);
    }

    const vector<ReplayEvent> &ReplayTimeline :: events() const 
    {
        return timeline_;
    }

    void ReplayTimeline :: clear()
    {
        timeline_.clear(); 
    }

    size_t ReplayTimeline :: size() const 
    {
        return timeline_.size(); 
    }
}