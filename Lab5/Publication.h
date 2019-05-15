#pragma once
#include <iostream>
#include <string>


class Publication{
public:
    

    Publication(){
    }

    virtual ~Publication() = default;

    
    static Publication* Create(std::string type, int num, std::string format);
        
    virtual int NPages() const= 0;

   
protected:
    
};
