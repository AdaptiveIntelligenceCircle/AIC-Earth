#include "social_replay.h"

using namespace std; 

namespace aic :: earth :: simulation :: replay
{
    SimulationResult SocialReplay :: replay(
        const vector<SimulationResult> &history) const 
        {
            SimulationResult result; 
            result.simulation_name = "social replay Analysis";

            int risk_count = 0; 
            for (const auto &h : history)
            {
                if (h.risk_detected)
                risk_count++; 
            }

            double risk_ratio = 
            history.empty()? 0.0 : 
            static_cast <double>(risk_count) / history.size(); 

            result.risk_detected = risk_ratio > 0.3; 
            result.signals.push_back({"risk_ratio", risk_ratio}); 

            result.narrative_summary = 
            result.risk_detected 
            ? "Repeated risk pattern detected across simulations"
            : "No persistent risk pattern observed"; 

            return result; 
        }
    
} // namespace aic :: earth :: simulation :: replay.. 