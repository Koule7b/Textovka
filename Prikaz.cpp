//
// Created by Admin on 22.5.2016.
//

#include <iostream>

using namespace std;
class Prikaz {
    string prikazovySlovo;
    string druhySlovo;
public:
    Prikaz(string prvniSlovo, string druhySlovo) {
        this->prikazovySlovo = prvniSlovo;
        this->druhySlovo = druhySlovo;
    }

    string getPrikazovySlovo() {
        return prikazovySlovo;
    }

    string getDruhySlovo() {
        return druhySlovo;
    }

    bool nevimPrikaz() {
        if (prikazovySlovo.empty()) {
            return true;
        } else {
            return false;
        }
    }

    bool maDruhySlovo() {
        return (!druhySlovo.empty());
    }
};