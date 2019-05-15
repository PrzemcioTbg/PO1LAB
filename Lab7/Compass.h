#pragma once
#include "Haversine.h"
#include <string>


class Compass{
public:
   
    Compass(std::string dir ="West") : _dir(dir) {}

    virtual std::string CompassDirection()const{
        return "C/" + _dir;
    }
    
    static std::string West(){
        return "West";
        }
    static std::string East(){
        return "East";
        }
    static std::string South(){
        return "South";
    }
    static std::string North(){
        return "North";
        }
protected:
    std::string _dir; 
};


