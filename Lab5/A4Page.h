#pragma once
#include "Page.h"

class A4Page: public Page{
public:
    A4Page(std::string title): Page(title) {} 

    A4Page(): Page("empty") {}
};
