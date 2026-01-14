#include "replay_engine.h"
using namespace std; 

namespace aic :: earth :: replay
{
    void ReplayEngine :: loadTimeline(const ReplayTimeline &timeline)
    {
        timeline_ = timeline; 
        cursor_ = 0; 
    }

    void ReplayEngine :: replayForward()
    {
        if (cursor_ >= timeline_.events().size()) return ; 

        applyEvent(timeline_.events()[cursor_], true);
        cursor_++; 
    }

    void ReplayEngine :: replayBackward()
    {
        if (cursor_ == 0) return ; 
        cursor_--; 
        applyEvent(timeline_.events()[cursor_], false); 
    }

    void ReplayEngine :: JumpTo(size_t index)
    {
        if (index < timeline_.events().size())
        {
            cursor_ = index; 
        }
    }

    void ReplayEngine :: applyEvent(const ReplayEvent &event, bool forward)
    {
        cout << (forward ? "Replay -> " : "[Rewind <-]")
        << event.description << endl; 
    }
}