#include "replay_analyzer.h"
using namespace std ; 

namespace aic :: earth :: replay
{
    double ReplayAnalyzer :: calculateInstability(const ReplayTimeline &timeline) const 
    {
        double score = 0.0; 
        for (const auto &e : timeline.events())
        {
            if (e.type == ReplayEventType :: CONFLICT or 
            e.type == ReplayEventType :: EXTERNAL_SHOCK){
                score += 1.0; 
            }
        }
        return score; 
    }

    size_t ReplayAnalyzer :: countConflicts(const ReplayTimeline &timeline) const 
    {
        size_t count = 0; 
        for (const auto &e : timeline.events())
        {
            if (e.type == ReplayEventType :: CONFLICT)
            {
                count++; 
            }
        }
        return count; 
    }
}