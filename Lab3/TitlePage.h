#pragma once 
#include "Page.h"

class TitlePage : public Page {
public:
   TitlePage(std::string text, std::string header, std::string author) : Page(text, header), _author(author) {}

    TitlePage(): Page("empty", "empty"), _author("empty") {}

   void SetAuthor(std::string author){
       _author = author;
   }

  

   std::string getAuthor()const {
       return _author;
   }

  

private:
    std::string _author;
};