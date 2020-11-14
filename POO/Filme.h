//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_FILM_H
#define POO_FILM_H
class Film {
    std::string nume;
    int varsta_necesara;
    float pret;
    int stoc;

public:
    Film();
    Film(std::string theName, int varsta_necesara,float pret,int stoc);
    std::string get_name() const;
    std::string informatii();
    bool in_stoc();
    void citire(std::string nume,int varsta,float pret,int stoc);
    friend std::ostream& operator<<(std::ostream& ostr, const Filme& stud);
}; //CLASA FILME

//========FUNCTII============

std::ostream& operator<<(std::ostream& ostr, const Filme& stud);

Film::Film(std::string nume, int varsta,float pret,int stoc)
{
    citire(nume,varsta,pret,stoc);
}

void Film::citire(std::string nume,int varsta,float pret,int stoc)
{
    nume=nume;
    varsta_necesara = varsta;
    pret=pret;
    stoc=stoc;
    std::cout<<"\nNume film: "<<this->nume<<"\nVarsta necesara: "<<this->varsta_necesara<<"\nPret: "<<this->pret<<"\nStoc: "<<this->stoc<<"\n";
}//CITIRE FILME

std::string Film::get_name() const
{
    return nume;
}

std::ostream& operator<<(std::ostream& out, const Filme& f)
{
    out << f.get_name();
    return out;
}//AFISARE

std::string Film::informatii()
{
    if(varsta_necesara == 18) return "Acest film este dedicat strict pentru adulti!\n";
    else if(varsta_necesara >= 14) return "Acest film poate fi vizionat numai cu acordul parintilor!\n";
    else return "Acest film este pentru copii!!\n";
}//CATEGORII DE VARSTA

bool Film::in_stoc()
{
    return stoc > 0;
}//DISPONIBILITATE

std::ostream& operator<<(std::ostream& out,Filme& f)
{
    if(f.in_stoc())out<<"\nDISPONIBIL\n";
    else out<<"\nSTOC EPUIZAT\n";
    out<<f.informatii();
    out<<"=====================================================";
    return out;
}//AFISARE STOC SI CATEGORIE VARSTA

#endif //POO_FILM_H
