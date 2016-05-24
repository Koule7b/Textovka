//
// Created by Admin on 22.5.2016.
//

#include <iostream>
#include "Hra.h"
#include "Mistnosti.h"


using namespace std;


    Mistnosti :: Mistnosti(string popis) {
        this->popis = popis;
        smeryVychodu = new string[7];
        vychody = new Mistnosti *[6];
        akce = new string[3];
    }

    void Mistnosti :: pridejAkci(string nazev) {
        akce[pocetAcke] = nazev;
        pocetAcke++;
    }

    void Mistnosti :: getAkce() {
        for (int i = 0; i < pocetAcke; i++) {
            cout << "     "+akce[i];
        }
        cout << endl;
    }

    void Mistnosti :: pridejVychod(string smer, Mistnosti *mistnost) {
        if (overeniPrvku(smer)) {
            smeryVychodu[pocetVychodu] = smer;
            vychody[pocetVychodu] = mistnost;
            pocetVychodu++;
        }
    }

    bool Mistnosti :: overeniPrvku(string smer) {
        bool obsazeno = true;
        for (int i = 0; i < pocetVychodu; i++) {
            if (smeryVychodu[i] == smer) {
                obsazeno = false;
            }
        }
        return obsazeno;
    }

    void Mistnosti :: uberVychod() {
        for (int i = 0; i < pocetVychodu; i++) {
            smeryVychodu[i] = smeryVychodu[i + 1];
            vychody[i] = vychody[i + 1];
        }
        pocetVychodu--;
    }


    string Mistnosti :: poppis() {
        return this->popis;
    }

    void Mistnosti :: getVychody() {
        for (int i = 0; i < pocetVychodu; i++) {
            cout << smeryVychodu[i] << " ";
        }
        cout << endl;
    }

    Mistnosti *Mistnosti :: getVychod(string smer) {
        for (int i = 0; i < 5; i++) {
            if (smeryVychodu[i] == smer) {
                return vychody[i];
            }
        }
    }

    bool Mistnosti :: jeV(string input) {
        for (int i = 0; i < 5; i++) {
            if (smeryVychodu[i] == input) {
                return true;
            }
        }
    }
/**
    ~Mistnosti() {
        for (int i = 0; i < pocetVychodu; i++) {
            delete[]smeryVychodu[i];
            delete[]vychody[i];
        }
        for (int i = 0; i < pocetAcke; i++) {
            delete[]akce[i];
        }
    }
    */
