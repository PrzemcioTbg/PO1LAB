#pragma once
#include "Page.h"

class B5Page: public Page{
public:
    B5Page(std::string text, std::string header): Page(text, header) {} 

    B5Page(): Page("empty", "empty") {}
};
