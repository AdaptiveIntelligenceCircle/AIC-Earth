#include "overload_sim.h"
using namespace std;

namespace aic :: earth :: simulation:: cognitive
{
    SimulationResult CognitiveOverloadSimulation :: run(
        const CognitiveInput &input 
    ) const
    {
        SimulationResult result; 

        result.simulation_name = "Cognitive Overload Simulation"; 

        double overload_score = 
        input.decisions_per_hour *0.4 + 
        input.concurrent_information_stream *0.6 + 
        (input.conflicting_narratives ? 15.0 : 0.0); 

        result.risk_detected = overload_score > 50.0; 

        result.signals.push_back(
            {"overload_score", overload_score}
        ); 

        result.narrative_summary = 
        result.risk_detected 
        ? "Cognitive overload likely. Human judgement quality degrades"
        : "Cognitive load within tolerable range"; 

        return result; 
    }
} // namespace aic :: earth :: simulation :: cognitive.. 