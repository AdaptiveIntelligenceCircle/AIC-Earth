#pragma once 
#include <vector> 

#include "earth_metrics.h"
using namespace std; 

namespace aic :: earth :: observability :: metrics
{
    class StabilityMetrics
    {
        public: 
        void ingest(const EarthMetric &metric); 
        double globalStability() const; 

        private:
        vector<EarthMetric> metrics_; 
    }; 
}