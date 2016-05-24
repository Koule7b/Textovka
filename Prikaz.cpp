//
// Created by Admin on 22.5.2016.
//

#include <iostream>
#include "Prikaz.h"

using namespace std;
    Prikaz::Prikaz(string prvniSlovo, string druhySlovo) {
        this->prikazovySlovo = prvniSlovo;
        this->druhySlovo = druhySlovo;
    }

    string Prikaz::getPrikazovySlovo() {
        return prikazovySlovo;
    }

    string Prikaz:: getDruhySlovo() {
        return druhySlovo;
    }

    bool Prikaz::nevimPrikaz() {
        if (prikazovySlovo.empty()) {
            return true;
        } else {
            return false;
        }
    }

    bool Prikaz::maDruhySlovo() {
        return (!druhySlovo.empty());
    }
