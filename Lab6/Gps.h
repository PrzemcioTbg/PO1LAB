#pragma once
#include "Main.h"

class Gps : public Coordinate{
public:
    Gps() : Coordinate(0, 0){}
    Gps(float longitude, float latitude): Coordinate(longitude, latitude) {} 
    Coordinate Location(float longitude, float latitude){
        Latitude(latitude);
        Longitude(longitude);
        return Coordinate(longitude, latitude);
    };
    Coordinate  LocationInfo(){
        return Coordinate(m_longitude, m_latitude);
    }
private:

};