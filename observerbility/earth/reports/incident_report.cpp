#include "incident_report.h"

namespace aic::earth::observability::reports 
{

void IncidentReport::describe(const string& summary) 
{
    summary_ = summary;
}

void IncidentReport::addImpact(const string& impact) 
{
    impact_ = impact;
}

void IncidentReport::addLesson(const string& lesson) 
{
    lesson_ = lesson;
}

string IncidentReport::finalize() const 
{
    return "Incident Summary:\n" + summary_ +
           "\nImpact:\n" + impact_ +
           "\nLesson Learned:\n" + lesson_;
}

}
