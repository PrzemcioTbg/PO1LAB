#pragma once 
#include "Page.h"

class TitlePage : public Page {
public:
   TitlePage(std::string text, std::string header, std::string author, std::string subTitle) : Page(text, header), _author(author), _subTitle(subTitle) {}

    TitlePage(): Page("empty", "empty"), _author("empty"), _subTitle("empty"){}

   void SetAuthor(std::string author){
       _author = author;
   }

   void SetSubTitle(std::string  subTitle){
       _subTitle = subTitle;
   }

   std::string getAuthor()const {
       return _author;
   }

   std::string getSubTitle()const {
       return _subTitle;
   }

private:
    std::string _author;
    std::string _subTitle;
};