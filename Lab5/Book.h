#pragma once 
#include "B5Page.h"
#include "TitlePage.h"
#include <vector>
#include "A4Page.h"
#include "Publication.h"

class Book : public Publication{
public:

    friend std::ostream& operator<<(std::ostream& stream, const Book& book);
    Book(std::string title, int numpages, std::string format): _title(title), _numberpages(numpages), _format(format) {
        _pages.push_back(new TitlePage());
        for(int i =0; i < _numberpages - 1; i++ ){
            if(format == "B5")
            _pages.push_back(new B5Page());

            if(format == "A4")
                _pages.push_back(new A4Page());
        }
    }

    ~Book(){
        for(auto i : _pages){
            delete i;               //zawsze wywola odpowidni bo zrobilismy wirtualny destruktor
        }
    }

    

    TitlePage* TitlePagePtr(){
        return static_cast<TitlePage*>(_pages.at(0)); //statiic cast bo zapewniam ze titlepage jest na pierwszym miejscu
    }

    void operator++(){
        _pages.push_back(new B5Page());
    }

    const Book& operator=(const Book& K){
        if( this != &K){
            if(_format != K._format)
                 std::cout << "[ERROR]:: Trying to assign different formats!" << std::endl;
            else
         _numberpages = K._numberpages;
        }
        
        return *this;
    }

    int NPages() const override{
        return _pages.size();
    }

 private:
    std::string _title;
    int _numberpages;
    std::string _format;
    std::vector <Page*> _pages;
 

};


