//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_FILME_H
#define POO_FILME_H

class Filme{
    std::string categorie;
    std::string nume_film;
    float pret;
    int stoc;
    int varsta_necesara;
public:
    Filme(std::string,std::string,float,int,int);
    Filme(Filme&);
    void informatii();
};
void Filme::informatii()
{
    if(varsta_necesara == 18) std::cout<<"\nAcest film este dedicat strict pentru adulti!";
    else if(varsta_necesara >= 14) std::cout<<"\nAcest film este numai cu acordul parintilor!";
    else std::cout<<"\nAcest film este pentru copii!";
    if(stoc == 0) std::cout<<" STOC EPUIZAT";
    else std::cout<<" DISPONIBIL";
}
Filme::Filme(std::string categorie,std::string nume_film,float pret,int stoc=0,int varsta_necesara=0)
{
    std::cout<<std::endl<<"Filmul selectat:";
    this->categorie=categorie;
    this->nume_film=nume_film;
    this->pret=pret;
    this->stoc=stoc;
    this->varsta_necesara=varsta_necesara;
    std::cout<<"\nCategorie: "<<this->categorie<<"\nNume: "<<this->nume_film<<"\nPret: "<<this->pret<<"\nStoc: "<<this->stoc<<"\nVarsta necesara: "<<this->varsta_necesara;
}
Filme::Filme(Filme& film)
{
    this->categorie=film.categorie;
    this->nume_film=film.nume_film;
    this->pret=film.pret;
    this->stoc=film.stoc;
    this->varsta_necesara=film.varsta_necesara;
    std::cout<<this->categorie<<" "<< this->nume_film<<" "<<this->pret<<" "<<this->stoc<<" "<< this->varsta_necesara;
}
#endif //POO_FILME_H
