//Name: Tom Abraham
//Student ID: 917096660

#include "Runway.h"
#include <iostream>
#include <string>
using namespace std;

//Constructor that utilizes initializor list to initialize const private members
Runway::Runway(string s) : site_number_(s.substr(0, 10)), name_(s.substr(13, 7)), length_(convert_length(s.substr(20, 5))){

};

//Returns the site number
string Runway::site_number(void) const{
    return site_number_;
}

//Returns the name
string Runway::name(void) const{
    return name_;
}

//Return the length of the runway
int Runway::length(void) const{
    return length_;
}

//Converts string length to integer counterpart
int Runway::convert_length(string s) const{
    int len = stoi(s);

    return len;
}