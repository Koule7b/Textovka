//
// Created by Admin on 22.5.2016.
//

#include <iostream>

using namespace std;

#ifndef TEXTOVKA_PRIKAZ_H
#define TEXTOVKA_PRIKAZ_H
class Prikaz
{
    string prvniSlovo, druhySlovo;

public:
    bool nevimPrikaz();

    string getPrikazovySlovo();

    string getDruhySlovo();

    bool maDruhySlovo();

    Prikaz(string prvniSlovo, string druhySlovo);
};
#endif //TEXTOVKA_PRIKAZ_H
