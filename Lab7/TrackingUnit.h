#pragma once
#include "Gps.h"
#include "TrackingSystem.h"


class TrackingUnit: public Gps, public TrackingSystem{
public:
    
    TrackingUnit(std::string dir = "South") : Compass(dir) {}
    
    
    std::string CompassDirection()const {
        return "TUnit/" +  _dir;
    }

    void Start(){
        _start = _coordinates;
    }

    float Distance()const{
        return _distance;
    }

      void Location(const Coordinate& location){
        _coordinates.Longitude(location.Longitude());
        _coordinates.Latitude(location.Latitude());
    }

    std::string LocationInfo()const{
        return "Longitude: " + std::to_string(_coordinates.Longitude()) + " Latitude: " + std::to_string(_coordinates.Latitude());
    }

    void Go(float distance, std::string dir){
        _coordinates.MoveInDirection(distance, dir);
        _distance = Haversine(_start.Longitude(),_start.Latitude(), _coordinates.Longitude(), _coordinates.Latitude());;
}
private:
    float _distance = 0; 
    Coordinate _start; 
};
