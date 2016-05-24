#include "PrikazovySlova.h"//
// Created by Admin on 22.5.2016.
//

#include "Prikaz.h"

#include <iostream>
#include "CteniPrikazu.h"

using namespace std;
    PrikazovySlova *prikazy = new PrikazovySlova();
    CteniPrikazu::CteniPrikazu() {
    }



Prikaz* CteniPrikazu::getPrikaz() {
        string slovo1;
        string slovo2;
        cout << "napis prikazy" << endl;
        cin >> slovo1;
        cin >> slovo2;

        if (prikazy->jePrikaz(slovo1)) {
            return new Prikaz(slovo1, slovo2);
        } else {
            return new Prikaz(NULL, slovo2);
        }
    }