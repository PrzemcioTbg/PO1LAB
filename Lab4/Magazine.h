#pragma once
#include "Publication.h"

class Magazine : public Publication{
public:

    Magazine() = default;
    
    virtual std::string DOI(){
       return _m + _DOINumber;

    }
protected:
    std::string _m = "M";
};