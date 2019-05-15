#include "Publication.h"
#include <iostream>
#include "Book.h"



Publication* Publication::Create(std::string type, int num, std::string format){
        return new Book(type, num, format);
     }

