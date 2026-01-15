#pragma once 
#include <string> 

#include <unordered_map>
using namespace std; 

namespace aic :: earth :: sandbox
{
    class SandboxAgent
    {
        public: 
        SandboxAgent(string id); 

        void setBelief(const string &key, double value); 
        double belief(const string &key) const; 

        const string &id() const; 

        private: 
        string id_; 
        unordered_map<string, double> beliefs_ ; 
    }; 
}