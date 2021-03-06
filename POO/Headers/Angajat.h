//
// Created by mihai on 12/1/2020.
//

#ifndef POO_ANGAJAT_H
#define POO_ANGAJAT_H

#include <iostream>
#include <string>
#include "../Headers/Film.h"

class Angajat {

    std::string nume_angajat;
    std::string departament;
    float bani_casierie;

public:
    ~Angajat() = default;

    void adauga_caserie(Film &f);

    Angajat(std::string nume, std::string departament, float bani_caserie);

    friend std::ostream &operator<<(std::ostream &out, const Angajat &a);

    std::string obiectiv() const;

};//CLASA ANGAJAT

#endif //POO_ANGAJAT_H