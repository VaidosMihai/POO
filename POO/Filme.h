//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_FILME_H
#define POO_FILME_H
class Filme {
    std::string nume;
    int varsta_necesara;
    float pret;
    int stoc;

public:
    Filme();
    Filme(std::string theName, int varsta_necesara,float pret,int stoc);
    std::string get_name() const;
    std::string informatii();
    bool in_stoc();
    void citire(std::string NUME,int varsta,float pret,int stoc);
    friend std::ostream& operator<<(std::ostream& ostr, const Filme& stud);
}; //CLASA FILME

//========FUNCTII============

std::ostream& operator<<(std::ostream& ostr, const Filme& stud);

Filme::Filme(std::string NUME, int VARSTA,float PRET,int STOC)
{
    citire(NUME,VARSTA,PRET,STOC);
}

void Filme::citire(std::string NUME,int VARSTA,float PRET,int STOC)
{
    nume=NUME;
    varsta_necesara = VARSTA;
    pret=PRET;
    stoc=STOC;
    std::cout<<"\nNume film: "<<this->nume<<"\nVarsta necesara: "<<this->varsta_necesara<<"\nPret: "<<this->pret<<"\nStoc: "<<this->stoc<<"\n";
}//CITIRE FILME

std::string Filme::get_name() const
{
    return nume;
}

std::ostream& operator<<(std::ostream& out, const Filme& f)
{
    out << f.get_name();
    return out;
}//AFISARE

std::string Filme::informatii()
{
    if(varsta_necesara == 18) return "Acest film este dedicat strict pentru adulti!\n";
    else if(varsta_necesara >= 14) return "Acest film poate fi vizionat numai cu acordul parintilor!\n";
    else return "Acest film este pentru copii!!\n";
}//CATEGORII DE VARSTA

bool Filme::in_stoc()
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

#endif //POO_FILME_H
