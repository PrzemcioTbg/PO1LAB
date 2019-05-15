#pragma once 
#include "Page.h"

class TitlePage : public Page {
public:
   TitlePage(std::string title) : Page(title) {}

    TitlePage(): Page("empty") {}


};