//
// Created by mihai on 12/1/2020.
//

#include "../Headers/Film.h"

#include <utility>

Film &Film::operator=(const Film &f) = default; //OPERATOR ( = )

Film::Film(std::string numele, int varsta, float pretul, int stocul)
{
    nume=std::move(numele);
    varsta_necesara = varsta;
    pret=pretul;
    stoc=stocul;
    std::cout<<"\nNume: "<<this->nume<<"\nVarsta necesara: "<<this->varsta_necesara<<"\nPret: "<<this->pret<<"\nStoc: "<<this->stoc;
}

int Film::varst_necesara() const {
    return varsta_necesara;
} //RETURNEAZA varsta_necesara pentru un film

double Film::get_pret() const
{
    return pret;
} //RETURNEAZA PRET FILM

std::string Film::get_name() const
{
    return nume;
}// RETURNEAZA NUMELE FILMULUI

std::ostream& operator<<(std::ostream& out, const Film& f)
{
        if(f.in_stoc())out<<"\nDISPONIBIL\n";
        else out<<"\nSTOC EPUIZAT\n";
        out<<f.informatii();
        out<<"-------------------------------------------------------------------";
        return out;
    //AFISARE STOC SI CATEGORIE VARSTA
}


std::string Film:: informatii()const
{
    if(varsta_necesara == 18) return "Acest film este dedicat strict pentru adulti!\n";
    else if(varsta_necesara >= 14) return "Acest film poate fi vizionat numai cu acordul parintilor!\n";
    else return "Acest film este pentru copii!!\n";
}//CATEGORII DE VARSTA

bool Film:: in_stoc()const
{
    return stoc > 0;
}//DISPONIBILITATE


