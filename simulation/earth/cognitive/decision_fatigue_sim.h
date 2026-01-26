#pragma once 
#include <string> 

#include <vector> 
using namespace std; 

namespace aic :: earth :: simulation :: cognitive 
{
    struct DecisionEvent 
    {
        string decision_id; 
        double complexity; // 0.0 - 1.0
        double urgency; // 0.0 - 1.0 
    }; 

    class DecisionFatigueSimulator 
    {
        public: 
        void ingest(const DecisionEvent &event); 
        double fatigueScore() const; 

        bool isCritical() const; 
        void reset(); 

        private: 
        vector<DecisionEvent> history_; 
    }; 
}