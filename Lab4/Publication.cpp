#include "Publication.h"
#include <iostream>
#include "Magazine.h"
#include "Book.h"



Publication* Publication::Create(std::string type, int num, std::string format){
        if(type == "Book"){return new Book();}
        else if( type == "Magazine") { return new Magazine();}   
        else return 0;
     }

