#pragma once
#include "Haversine.h"
#include "Compass.h"
#include <string>


class Gps: public virtual Compass{
public:
    
    Gps (std::string city ="East", float longitude = 0, float latitude = 0) : _city(city) {
        _coordinates.Longitude(longitude);
        _coordinates.Latitude(latitude);

    }

    std::string GetCity()const{
        return _city;
    }
    void SetCity(std::string& city){
        _city = city;
    }

    void UpdateLocation(float longitude, float latitude){
        _coordinates.Longitude(longitude);
        _coordinates.Latitude(latitude);
    }

    Coordinate& Coordintes(){
         return _coordinates;
    }

    std::string GpsLoc()const{
         return "Longitude: " + std::to_string(_coordinates.Longitude()) + " Latitude: " + std::to_string(_coordinates.Latitude());
    }


    std::string CompassDirection()const {
        return "G/" + _dir;
    }

    Coordinate Location()const{
        return _coordinates;
    }

protected:
    std::string _city;  
    Coordinate _coordinates;
};
