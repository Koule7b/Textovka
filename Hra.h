//
// Created by Admin on 22.5.2016.
//


#ifndef TEXTOVKA_HRA_H
#define TEXTOVKA_HRA_H
#include "Prikaz.h"
class Hra
{
    void uvod();
    void vytvorDomu();
    void vypisUvitani();
    void vypisMoznosti();
    void vychody();
    void mapaDommu();
    void mapaOkoli();
    void cistKnihu(Prikaz &prikaz);
    bool aktualniPrikaz(Prikaz &prikaz);
    void vypis();
    void rozhodovani1();
    void vypisPomoc();
    void jdiDoMistnosti(Prikaz &prikaz);
    bool vypnout(Prikaz &prikaz);
    void vykresleniHrad(int vyska);
    void knihy();
    void vykresleniStreduHradu(int cislo, int cislo2);
    void vykresleniMezer(int sir);

public:
    string nazev1;
    string nazev2;
    string nazev3;
    Hra();

    void hraj();
};

#endif //TEXTOVKA_HRA_H
