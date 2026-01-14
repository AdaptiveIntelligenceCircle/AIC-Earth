#include "trust_collapse_sim.h"
using namespace std ; 

namespace aic ::  earth :: simulation :: social
{
    SimulationResult TrustCollapseSimulation :: run(
        const TrustInput &input
    ) const 
    {
        SimulationResult result; 
        result.simulation_name = "Trust Collapse Simulation"; 

        double collapse_index = 
        input.trust_decay_rate *input.number_of_agents *
        (input.central_actor_present ? 1.8 : 1.0); 

        result.risk_detected = collapse_index > 100.0; 

        result.signals.push_back({"collapse index", collapse_index}); 
        
        result.narrative_summary = 
        result.risk_detected ? 
        "High probability of trust collapse due to centrailization"
        : "Trust network remains distributed"; 

        return result; 
    }
}