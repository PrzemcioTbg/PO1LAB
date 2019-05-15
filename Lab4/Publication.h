#pragma once
#include <iostream>
#include <string>


class Publication{
public:
    

    Publication(){
        _DOINumber = "/00.0000/000";
    }

    virtual ~Publication() = default;

    
    static Publication* Create(std::string type, int num, std::string format);
        

    virtual std::string DOI() = 0;
protected:
    std::string _DOINumber;
    
};
   