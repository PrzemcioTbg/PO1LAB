#pragma once 
#include <string>
#include <iostream>

//Klasa reprezentująca pmieszczenie 
class Pomieszczenie{
public:
    //Konstruktor przyjmujący nazwę pomieszczenia 
    //Konstruktor jest głośny, tzn wypisuje informacje o 
    //tworzeniu obiektu
    Pomieszczenie(std::string name) : _name(name) {
        std::cout << "Tworze pomieszczenie: " << _name << std::endl;
    }

    //Metoda zetrzyj_kurze
    //Wypisuje tekst oraz nazwę pomieszczenia 
    //w którym ściera kurze
    void zetrzyj_kurze() const {
        std::cout << "Scieram kurze w pomieszczeniu: " << _name  << std::endl;
    }

    //Metoda umyj_podloge
    //Wypisuje tekst oraz nazwę pomieszczenia 
    //w którym myje podłogę
    void umyj_podloge() const{
        std::cout << "Myje podlogew pomieszczeniu: " << _name  << std::endl;
    }

     //Metoda okurz
    //Wypisuje tekst oraz nazwę pomieszczenia 
    //w którym odkurza
    void odkurz() const{
        std::cout << "Odkurzam pomieszczenie: " << _name  << std::endl;
    }
    //Metoda szablonowa wstaw
    //wstawia wartość typu T do pomieszczenia
    template<typename T>
    void wstaw(T wartosc){
        std::cout << "Wtawiam " << wartosc << " do pomieszczenia: " << _name << std::endl;
    }
private:
    std::string _name;
};


/*
    ogólny wskaźnik na medotę void która nie przyjmuje argumentów i jest const!! w klasie pomieszczeni
    Lokaj przyjmuje obiekt na którym chcemy wywołać tę funkcję
    lokaj przyjmuje obiekt który jest const 
*/
template<void (Pomieszczenie::*T)() const> 
void Lokaj(const Pomieszczenie &room){ 
    std::cout << "Pomieszczenie jest zamkniete\n";
}

template<int> 
void Lokaj(const Pomieszczenie &room){
    std::cout << "Nic nie robie" << std::endl;
}

//Rozni sie tylko tym ze lokaj przyjmuje obiekt nie const
template<void (Pomieszczenie::*T)() const> 
void Lokaj(Pomieszczenie &room){ 
    (room.*T)();
}