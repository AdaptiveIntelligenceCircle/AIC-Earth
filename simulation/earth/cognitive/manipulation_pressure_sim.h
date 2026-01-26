#pragma once 
#include <string> 

#include <vector> 
using namespace std; 

namespace aic :: earth :: simulation :: cognitive 
{
    struct InfluenceAttempt 
    {
        string source;
        double repitition; 
        double emotional_load; 
        double authority_bias; 
    }; 

    class ManipulationPressureSimulator 
    {
        public: 
        void record(const InfluenceAttempt &attempt); 
        double pressureIndex() const; 

        bool exceedSafeLimit() const;
        void reset(); 

        private:
        vector<InfluenceAttempt> attempts_; 
    }; 
}