#include "stability_metrics.h"
using namespace std; 

namespace aic :: earth :: observability :: metrics
{
    void StabilityMetrics :: ingest(const EarthMetric &metric)
    {
        if (metric.type== EarthMetricType :: STABILITY)
        metrics_.push_back(metric); 
    }

    double StabilityMetrics :: globalStability() const 
    {
        if (metrics_.empty()) return 1.0; 
        double sum = 0.0; 
        for (const auto &m : metrics_)
        sum+= m.value; 

        return sum/metrics_.size(); 
    }
}