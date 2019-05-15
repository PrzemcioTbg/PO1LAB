#pragma once
#include "Publication.h"

class Book : public Publication{
public:

    Book() = default;

    virtual std::string DOI(){
        return _b + _DOINumber;
    }
protected:
    std::string _b= "B";
};