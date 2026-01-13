#pragma once 
#include <string> 
#include <chrono>
using namespace std; 

namespace aic :: earth
{
    enum class EarthScope
    {
        LOCAL, 
        REGIONAL, 
        GLOBAL
    };

    struct EarthContext
    {
        string region; 
        EarthScope scope; 

        bool democratic_environment; 
        bool high_information_noise; 
        bool active_conflict_zone; 

        chrono :: system_clock :: time_point snapshot_time; 

        EarthContext()
        : scope(EarthScope :: LOCAL), 
        democratic_environment(false), 
        high_information_noise(false), 
        active_conflict_zone(false), 
        snapshot_time(chrono :: system_clock :: now()){}
    }; 
} // namespace aic :: earth.. 