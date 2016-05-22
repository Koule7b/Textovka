//
// Created by Admin on 22.5.2016.
//

#include "Prikaz.cpp"

#include <iostream>

#include "PrikazovySlova.cpp"
using namespace std;
class CteniPrikazu {
    PrikazovySlova *prikazy = new PrikazovySlova();
public:
    CteniPrikazu() {
    }

    Prikaz *getPrikaz() {
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
};