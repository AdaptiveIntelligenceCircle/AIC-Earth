#include "earth_report.h"
using namespace std; 

namespace aic :: earth :: observability :: reports
{
    void EarthReport :: setTitle(const string &title)
    {
        title_ = title; 
    }

    void EarthReport :: append(const string &section)
    {
        body_ += section + "\n"; 
    }

    string EarthReport  :: render() const 
    {
        return "#" + title_ + "\n\n" + body_; 
    }
}