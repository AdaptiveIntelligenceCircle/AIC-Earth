#pragma once 
#include <vector> 

#include "earth_metrics.h"
using namespace std; 

namespace aic :: earth :: observability :: metrics
{
    class TrustMetrics
    {
        public: 
        void ingest(const EarthMetric &metric); 
        double trustIndex() const; 

        private: 
        vector<EarthMetric> trust_samples_; 
    }; 
}