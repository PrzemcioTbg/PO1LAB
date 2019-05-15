#pragma once
#include "Page.h"

class A4Page: public Page{
public:
    A4Page(std::string text, std::string header): Page(text, header) {} 

    A4Page(): Page("empty", "empty") {}
};
