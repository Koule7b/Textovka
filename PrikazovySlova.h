//
// Created by Admin on 22.5.2016.
//

#include <iostream>

using namespace std;
#ifndef TEXTOVKA_PRIKAZOVYSLOVA_H
#define TEXTOVKA_PRIKAZOVYSLOVA_H
#include <iostream>

using namespace std;
class PrikazovySlova {
public:
    string platnePrikazyy[4] = {"jdi", "pomoc", "cist", "vypnout"};

    bool jePrikaz(string prikaz) {
        for (int i = 0; i < 4; i++) {
            if (platnePrikazyy[i] == prikaz)
                return true;
        }
        return false;
    }
};

#endif //TEXTOVKA_PRIKAZOVYSLOVA_H
