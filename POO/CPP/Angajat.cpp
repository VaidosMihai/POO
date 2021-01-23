//
// Created by mihai on 12/1/2020.
//

#include "../Headers/Angajat.h"
#include <iostream>
#include <string>

//========FUNCTII============
std::ostream &operator<<(std::ostream &out, const Angajat &a) {
    out << a.nume_angajat << " a facut vanzari in total de " << a.bani_casierie << " de lei.\n";
    out << a.obiectiv();
    return out;
}//AFISEAZA BANII INCASATI DE UN ANGAJAT

void Angajat::adauga_caserie(Film &f) {
    bani_casierie = bani_casierie + f.get_pret();
}//ADAUGA BANII IN CASERIA UNUI ANGAJAT

Angajat::Angajat(std::string nume, std::string identificare, float bani) {
    this->nume_angajat = nume;
    this->departament = identificare;
    this->bani_casierie = bani;
    std::cout << "\nNume: " << this->nume_angajat << "\nDepartament: " << this->departament;
}

std::string Angajat::obiectiv() const {
    std::string text;
    try {
        if (bani_casierie < 20) {
            text = "Vanzari mici";
            throw text;
        }
        if (bani_casierie > 20 && bani_casierie < 60) {
            text = "Vanzari medii";
            throw text;
        }
        if (bani_casierie > 60) {
            text = "Vanzari bune";
            throw text;
        }
    }
    catch (std::string mesaj) {
        std::cout << mesaj;
    }
}