//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_ANGAJAT_H
#define POO_ANGAJAT_H

class Angajat{
    std::string nume_angajat;
    int id;
    float bani_caserie;
public:
    void adauga_caserie(Film& f);
    Angajat(std::string,int,float);
    Angajat(Angajat&);
    friend std::ostream& operator<<(std::ostream& out, const Angajat& a);
};

//========FUNCTII============
std::ostream& operator<<(std::ostream& out, const Angajat& a)
{
    out<<a.nume_angajat<<" a facut vanzari in total de "<<a.bani_caserie<<" de lei.\n";
    return out;
}
void Angajat::adauga_caserie(Film& f)
{
    bani_caserie=bani_caserie+f.get_pret();
}
Angajat::Angajat(std::string NUME,int ID,float bani=0)
{
    this->nume_angajat=NUME;
    this->id=ID;
    this->bani_caserie=bani;
    std::cout<<"\nNume: "<<this->nume_angajat<<"\nid: "<<this->id;
}
Angajat::Angajat(Angajat& X)
{
    this->nume_angajat=X.nume_angajat;
    this->id=X.id;
    std::cout<<this->nume_angajat<<" "<<this->id;
}
#endif //POO_ANGAJAT_H
