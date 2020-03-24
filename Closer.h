//Name: Tom Abraham
//Student ID: 917096660

//
// Closer.h
//


#ifndef CLOSER_H
#define CLOSER_H
#include "Facility.h"
#include <string>

class Closer
{
public:
    Closer(double current_latitude, double current_longitude) : lat(current_latitude), lon(current_longitude){};

    bool operator()(Facility* x, Facility* y) 
    {
        if ((x->distance(lat, lon)) < (y->distance(lat, lon))){
            return true;
        }

        return false;
    }

private: 
    double lat;
    double lon;
};
#endif