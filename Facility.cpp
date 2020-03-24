//Name: Tom Abraham
//Student ID: 917096660

#include <iostream>
#include "Facility.h"
#include "gcdistance.h"
#include <string>
using namespace std;

//Constructor that utilizes initializor list to initialize const private members
Facility::Facility(string s) : site_number_(s.substr(0, 10)), type_(s.substr(11, 13)), code_(s.substr(24, 4)), name_(s.substr(130, 50)), latitude_(convert_latitude(s.substr(535, 12))), longitude_(convert_longitude(s.substr(562, 12))){

};

//Returns the site number
string Facility::site_number(void) const{
    return site_number_;
}

//Returns the type
string Facility::type(void) const{
    return type_;
}

//Returns the code
string Facility::code(void) const{
    return code_;
}

//Returns the name
string Facility::name(void) const{
    return name_;
}

//Returns the latitude
double Facility::latitude(void) const{
    return latitude_;
}

//Returns the longitude
double Facility::longitude(void) const{
    return longitude_;
}

//Returns the distance in nautical miles between facility and position defined by (lat, lon) in degrees decimal
double Facility::distance(double lat, double lon) const{
    return gcdistance(latitude_, longitude_, lat, lon);
}

//Converts string latitude into a double seconds value
double Facility::convert_latitude(string s) const{

    double lat=0.0;

    //If the direction is south, the value is negative
    if(s.at(s.length()-1) == 'S'){
        lat = (-1) * stod(s.substr(0, 10));
        
    }
    else{
        lat = stod(s.substr(0, 10));
    } 

    lat = lat / (3600);

    return lat;
}

//Converts string longitude into a double seconds value
double Facility::convert_longitude(string s) const{
    double lon=0.0;

    //If the direction is west, the value is negative
    if(s.at(s.length()-1) == 'W'){
        lon = (-1) * stod(s.substr(0, 10));
    }
    else{
        lon = stod(s.substr(0, 10));
    } 

    lon = lon / (3600);

    return lon;
}

