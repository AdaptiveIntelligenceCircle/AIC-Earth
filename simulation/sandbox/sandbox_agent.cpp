#include "sandbox_agent.h"

using namespace std; 

namespace aic :: earth :: sandbox
{
    SandboxAgent :: SandboxAgent(string id)
    : id_(move(id))
    {}

    void SandboxAgent :: setBelief(const string &key, double value)
    {
        beliefs_[key] = value; 
    }

    double SandboxAgent::belief(const string &key) const 
    {
        auto it = beliefs_.find(key); 
        return it!= beliefs_.end() ? it -> second : 0.0; 
    }

    const string &SandboxAgent :: id() const 
    {
        return id_; 
    }
}