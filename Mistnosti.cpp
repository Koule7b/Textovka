//
// Created by Admin on 22.5.2016.
//

#include <iostream>



using namespace std;
class Mistnosti {
    string popis;
    string nazev;
    Mistnosti **vychody;
    string *smeryVychodu;
    int pocetVychodu = 0;

public:
    Mistnosti(string popis) {
        this->popis = popis;
        smeryVychodu = new string[7];
        vychody = new Mistnosti *[6];
    }

    void pridejVychod(string smer, Mistnosti *mistnost) {
        if (overeniPrvku(smer)) {
            smeryVychodu[pocetVychodu] = smer;
            vychody[pocetVychodu] = mistnost;
            pocetVychodu++;
        }
    }

    bool overeniPrvku(string smer) {
        bool obsazeno = true;
        for (int i = 0; i < pocetVychodu; i++) {
            if (smeryVychodu[i] == smer) {
                obsazeno = false;
            }
        }
        return obsazeno;
    }

    void uberVychod() {
        for (int i = 0; i < pocetVychodu; i++) {
            smeryVychodu[i] = smeryVychodu[i + 1];
            vychody[i] = vychody[i + 1];
        }
        pocetVychodu--;
    }


    string poppis() {
        return this->popis;
    }

    void getVychody() {
        for (int i = 0; i < pocetVychodu; i++) {
            cout << smeryVychodu[i] << " ";
        }
        cout << endl;
    }

    Mistnosti *getVychod(string smer) {
        for (int i = 0; i < 5; i++) {
            if (smeryVychodu[i] == smer) {
                return vychody[i];
            }
        }
    }

    bool jeV(string input) {
        for (int i = 0; i < 5; i++) {
            if (smeryVychodu[i] == input) {
                return true;
            }
        }
    }
};
