#include "trust_metrics.h"

using namespace std; 

namespace aic :: earth :: observability :: metrics
{
    void TrustMetrics :: ingest(const EarthMetric &metric)
    {
        if (metric.type == EarthMetricType :: TRUST)
        trust_samples_.push_back(metric); 
    }

    double TrustMetrics :: trustIndex() const 
    {
        if (trust_samples_.empty()) return 0.5; 

        double sum = 0.0; 
        for (const auto &m : trust_samples_)
        sum+= m.value; 

        return sum/trust_samples_.size(); 
    }
}