#pragma once
#include <iostream>
#include <string>

class Page{
public:
    Page(std::string title): _title(title) {}
    virtual ~Page() = default;

    virtual std::string GetTitle() const{
        return _title;
    }

    virtual void SetTitle(std::string title){
        _title = title;
    }
     
protected:
    std::string _title;
};