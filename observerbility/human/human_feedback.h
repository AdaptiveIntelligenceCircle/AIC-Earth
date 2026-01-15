#pragma once 
#include <string>

using namespace std; 

namespace aic :: earth :: observability :: human
{
    class HumanFeedback
    {
        public: 
        explicit HumanFeedback(string source); 

        void submit(const string &text); 
        const string &content() const; 

        private: 
        string source_; 
        string content_; 
    }; 
}