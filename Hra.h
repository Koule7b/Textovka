//
// Created by Admin on 22.5.2016.
//

#include "Prikaz.h"
#ifndef TEXTOVKA_HRA_H
#define TEXTOVKA_HRA_H
class Hra
{
    void uvod();
    void vytvorDomu();
    void vypisUvitani();
    void vypisMoznosti();
    void vychody();
    void mapaDommu();
    bool aktualniPrikaz(Prikaz &prikaz);
    void vypisPomoc();
    void jdiDoMistnosti(Prikaz &prikaz);
    bool vypnout(Prikaz &prikaz);

public:
    Hra();

    void hraj();
};

#endif //TEXTOVKA_HRA_H
