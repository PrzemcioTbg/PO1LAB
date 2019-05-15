#pragma once
#include "Page.h"

class B5Page: public Page{
public:
    B5Page(std::string title): Page(title) {} 

    B5Page(): Page("empty") {}
};
