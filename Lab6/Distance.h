#pragma once 
#include "Main.h"

class Distance {
public:
    Distance(Coordinate& city1, Coordinate& city2): Distance (city1.Longitude(), city1.Latitude(), city2.Longitude(), city2.Latitude()){}
    Distance(float x1, float y1, float x2, float y2){
        _distance=Haversine(x1, y1, x2, y2);
    }
    ~Distance()=default;
   float Value(){return _distance;}
private: 
   float _distance;
};