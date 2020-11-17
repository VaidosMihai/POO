//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_FILME_H
#define POO_FILME_H
class Film{
    std::string nume;
    int varsta_necesara;
    float pret;
    int stoc;

public:
    Film(std::string numele, int varsta, float pret, int stocul);
    std::string get_name() const;
    double get_pret();
    std::string informatii();
    bool in_stoc();
    void citire(std::string numele,int varsta,float pret,int stoc);
    Film &operator=(const Film &);
    friend std::ostream& operator<<(std::ostream& ostr, const Film& stud);
    friend class Client;
}; //CLASA FILM

//========FUNCTII============
Film &Film::operator=(const Film &f) {
    this->nume = f.nume;
    this->varsta_necesara = f.varsta_necesara;
    this->pret = f.pret;
    this->stoc=f.stoc;
    return (*this);
} //OPERATOR ( = )

Film::Film(std::string numele, int varsta, float pretul, int stocul)
{
    citire(numele,varsta,pretul,stocul);
}

double Film::get_pret()
{
    return pret;
}

std::string Film::get_name() const
{
    return nume;
}

std::ostream& operator<<(std::ostream& out, const Film& f);

void Film::citire(std::string numele,int varsta,float pretul,int stocul)
{
    nume=numele;
    varsta_necesara = varsta;
    pret=pretul;
    stoc=stocul;
    std::cout<<"\nNume film: "<<this->nume<<"\nVarsta necesara: "<<this->varsta_necesara<<"\nPret: "<<this->pret<<"\nStoc: "<<this->stoc<<"\n";
}//CITIRE FILME

std::string Film:: informatii()
{
    if(varsta_necesara == 18) return "Acest film este dedicat strict pentru adulti!\n";
    else if(varsta_necesara >= 14) return "Acest film poate fi vizionat numai cu acordul parintilor!\n";
    else return "Acest film este pentru copii!!\n";
}//CATEGORII DE VARSTA

bool Film:: in_stoc()
{
    return stoc > 0;
}//DISPONIBILITATE

std::ostream& operator<<(std::ostream& out, const Film& f)
{
    out << f.get_name();
    return out;
}//AFISARE PENTRU VECTORUL DE FILME

std::ostream& operator<<(std::ostream& out,Film& f)
{
    out << f.get_name();
    if(f.in_stoc())out<<"\nDISPONIBIL\n";
    else out<<"\nSTOC EPUIZAT\n";
    out<<f.informatii();
    out<<"=====================================================";
    return out;
}//AFISARE STOC SI CATEGORIE VARSTA

#endif //POO_FILME_H
