#pragma once
#include "Compass.h"


class TrackingSystem: public virtual Compass {
public:
    
    TrackingSystem(std::string dir="North") :Compass(dir) {}

    std::string CompassDirection()const {
        return "TS/" + _dir;
    }
};
