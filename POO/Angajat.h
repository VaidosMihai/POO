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
public:
    Angajat(std::string,int,int);
    Angajat(Angajat&);
};
Angajat::Angajat(std::string nume_angajat,int id,int schimb)
{
    this->nume_angajat=nume_angajat;
    this->id=id;
    this->schimb=schimb;
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
