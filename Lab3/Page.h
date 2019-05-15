#pragma once
#include <iostream>
#include <string>

class Page{
public:
    Page(std::string text, std::string header): _text(text), _header(header) {}
    
    virtual ~Page() = default;

   
    virtual std::string Text()const {return _text;}

    void SetHeader(std::string header){
        _header = header;
    }

    virtual void Text(std::string text){
        _text = text;
    }
     
protected:
    std::string _text;
    std::string _header;
};