//
// Created by Admin on 22.5.2016.
//

#include <iostream>

using namespace std;

#ifndef TEXTOVKA_MISTNOSTI_H
#define TEXTOVKA_MISTNOSTI_H


class Mistnosti
{
public:
    Mistnosti(string popis);
    void pridejAkci(string nazev);
    void getAkce();
    void pridejVychod(string smer, Mistnosti *mistnost);
    bool overeniPrvku(string smer);
    void uberVychod();
    string poppis();
    void getVychody();
    Mistnosti *getVychod(string smer);
    bool jeV(string input);

};
#endif //TEXTOVKA_MISTNOSTI_H
