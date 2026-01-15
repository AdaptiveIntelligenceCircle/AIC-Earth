#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth :: observability :: reports
{
    class IncidentReport
    {
        public:
        void describe(const string &summary); 
        void addImpact(const string &impact); 
        void addLesson(const string &lesson); 

        string finalize() const; 

        private: 
        string summary_; 
        string impact_; 
        string lesson_; 
    };  
}