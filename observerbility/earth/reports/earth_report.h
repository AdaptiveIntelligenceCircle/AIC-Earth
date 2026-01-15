#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth :: observability :: reports
{
    class EarthReport
    {
        public: 
        void setTitle(const string &title); 
        void append(const string &section); 

        string render() const; 

        private: 
        string title_; 
        string body_; 
    }; 
}