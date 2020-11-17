//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_ANGAJAT_H
#define POO_ANGAJAT_H

class Angajat{
    std::string nume_angajat;
    int id;
    int schimb;
    int bani_caserie;
public:
    void adauga_caserie(Film& f);
    int get_bani() const;
    Angajat(std::string,int,int,int);
    Angajat(Angajat&);
};

//========FUNCTII============
int Angajat::get_bani() const
{
    return bani_caserie;
}
void Angajat::adauga_caserie(Film& f)
{
    bani_caserie=bani_caserie+f.get_pret();
}
Angajat::Angajat(std::string NUME,int ID,int SCHIMB,int bani_caserie=0)
{
    this->nume_angajat=NUME;
    this->id=ID;
    this->schimb=SCHIMB;
    std::cout<<"\nNume: "<<this->nume_angajat<<"\nid: "<<this->id<<"\nSchimbul: "<<this->schimb;
}
Angajat::Angajat(Angajat& X)
{
    this->nume_angajat=X.nume_angajat;
    this->id=X.id;
    this->schimb=X.schimb;
    std::cout<<this->nume_angajat<<" "<<this->id<<" "<<this->schimb;
}

#endif //POO_ANGAJAT_H
