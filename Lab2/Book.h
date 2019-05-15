#pragma once 
#include "B5Page.h"
#include "TitlePage.h"
#include <vector>

class Book{
public:

    friend std::ostream& operator<<(std::ostream& stream, const Book& book);
    Book(std::string title, int numpages, std::string format): _title(title), _numberpages(numpages), _format(format) {
        _pages.push_back(new TitlePage());
        for(int i =0; i < _numberpages; i++ ){
            _pages.push_back(new B5Page());
        }
    }

    ~Book(){
        for(auto i : _pages){
            delete i;               //zawsze wywola odpowidni bo zrobilismy wirtualny destruktor
        }
    }

    int size(){
        return _numberpages +1;
    }

    TitlePage* TitlePagePtr(){
        return static_cast<TitlePage*>(_pages.at(0)); //statiic cast bo zapewniam ze titlepage jest na pierwszym miejscu
    }

    Page* operator[](int i){
        return _pages.at(i-1);
    }

 private:
    std::string _title;
    int _numberpages;
    std::string _format;
    std::vector <Page*> _pages;

};

std::ostream &operator<<(std::ostream &stream, const Book &book)
{
    stream << "[Book::Title]    " << book._title << "(" << dynamic_cast<TitlePage*>(book._pages.at(0))->getSubTitle() << ")" <<std::endl;
    
   stream << "[Book::Author]    "<< dynamic_cast<TitlePage*>(book._pages.at(0))->getAuthor()<< std::endl;
    for(int i = 0; i < (int)book._pages.size()-1; i++){
        if(book._pages[i]->getHeader() != "empty"){
            stream <<"[Page(" << i << ")::header]   " <<book._pages[i]->getHeader() << std::endl;   
        }
        stream << "[Page(" <<  i << ")::text]    " << book._pages[i]->getText() << std::endl;
    }
	return stream;
}

