//
// Created by mihai on 12/1/2020.
//

#include "../Headers/Angajat.h"
#include <iostream>
#include <string>

//========FUNCTII============
std::ostream& operator<<(std::ostream& out, const Angajat& a)
{
    out<<a.nume_angajat<<" a facut vanzari in total de "<<a.bani_caserie<<" de lei.\n";
    return out;
}//AFISEAZA BANII INCASATI DE UN ANGAJAT

void Angajat::adauga_caserie(Film& f)
{
    bani_caserie=bani_caserie + f.get_pret();
}//ADAUGA BANII IN CASERIA UNUI ANGAJAT

Angajat::Angajat(std::string nume,std::string identificare,float bani)
{
    this->nume_angajat=nume;
    this->departament=identificare;
    this->bani_caserie=bani;
    std::cout<<"\nNume: "<<this->nume_angajat<<"\nDepartament: "<<this->departament;
}
Angajat::Angajat(Angajat& X)
{
    this->nume_angajat=X.nume_angajat;
    this->departament=X.departament;
    std::cout<<this->nume_angajat<<" "<<this->departament;
}