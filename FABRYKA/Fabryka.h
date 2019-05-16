#pragma once
#include "Samochod.h"

//Klasa reprezentująca fabrykę
class Fabryka{
public:
    //Metoda szablonowa prototyp
    //Zwraca statyczną zmienną Typu T 
    template<typename T> T prototyp(T value, bool czyZmieniac = true);

    template<typename T> T produkuj();
};

template<typename T>
T Fabryka::prototyp(T value, bool czyZmieniac){
    static T zmienna;
    if(czyZmieniac)
        zmienna = value;
    return zmienna;
}

template<typename T>
T Fabryka::produkuj(){
    return prototyp(T(), false);
}


