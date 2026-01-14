#include "rapid_scale_sim.h"

using namespace std; 

namespace aic :: earth :: simulation :: scale
{
    SimulationResult RapidScaleSimulation :: run(
        const ScaleInput &input
    ) const 
    {
        SimulationResult result; 
        result.simulation_name = "Rapid Scale Simulation"; 

        double scale_pressure = 
        input.initial_agents *input.growth_rate *
        (input.constraints_enabled ? 0.5 : 2.0);

        result.risk_detected = scale_pressure > 200.0; 

        result.signals.push_back({"scale pressure" , scale_pressure}); 

        result.narrative_summary = 
        result.risk_detected 
        ? "Unbounded scaling detected. Risk of power concentration"
        : "Scaling within controlled parameters"; 

        return result; 
    }
} // namespace aic :: earth :: simulation :: scale.