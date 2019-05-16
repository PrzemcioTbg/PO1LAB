#pragma once
#include <iostream>

//Klasa reprezentująca punkt na płaszczyznie 2d
class Punkt{
public:
    
    //Konstruktor obiektu klasy punkt 
    //x- pierwsza współrzędna punktu
    //y - druga współrzędna punktu
    Punkt(int x, int y) : m_x(x), m_y(y) {}
    
    //Metoda szablonowa wsp
    //W przypadku a = 0 zwraca pierwszą współrzędną punktu
    //W przypasku a = 1 zwraca drugą współrzędną punktu 
    template<int a> int wsp() const;

    //Metoda szablonowa min
    //Zwraca minimalny element z dwóch porównywanych a lub b
    template<typename T> static T min(const T& a,const  T& b);

    //Metoda szablonowa max
    //Zwraca maksymalny element z dwoch porównywanych a lub b
    template<typename T> static T max(const T& a,const T& b);

    //Operator < 
    //Sprawdza czy wpółrzędne punktu są mniejsze od parametru other
    bool operator < (const Punkt& other) const; 
private:
    int m_x;
    int m_y;
};


template<int a>
int Punkt::wsp() const{
    if(a == 0)
        return m_x;
    else return m_y;
}
bool Punkt::operator < (const Punkt& other) const{
    if(m_x > other.m_x)
        return false;
    else if(m_x == other.m_x)
        if(m_y >= other.m_y)
            return false;
    return true;
}

template<typename T>
T Punkt::min(const T& a,const T& b){
    return (a < b) ? a : b;
}

template<typename T>
T Punkt::max(const T& a,const T& b){
    return (a < b) ? b : a;
}