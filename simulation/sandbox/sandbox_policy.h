#pragma once 
#include <string> 

using namespace std; 

namespace aic :: earth :: sandbox
{
    class SandboxPolicy
    {
        public: 
        explicit SandboxPolicy(string name); 

        bool evaluate(double input) const; 
        const string &name() const; 

        private: 
        string name_; 
    }; 
}