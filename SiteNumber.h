//Name: Tom Abraham
//Student ID: 917096660

//
//SiteNumber.h
//

#ifndef SITENUMBER_H
#define SITENUMBER_H
#include <string>
#include "Runway.h"
using namespace std;

class SiteNumber{
    public:
        SiteNumber(int min_runway_length, string site_number) : len(min_runway_length), site_num(site_number){

        }

        bool operator()(Runway* r) const{
            if ((r->site_number() == site_num) && (r->length() >= len)){
                return true;
            }
            else{
                return false;
            }

            
            
            
        }
    private:
        int len;
        string site_num;
};





#endif