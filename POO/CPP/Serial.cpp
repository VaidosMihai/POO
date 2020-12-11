//
// Created by mihai on 12/11/2020.
//

#include "../Headers/Serial.h"

#include <utility>
Serial::Serial(std::string numele, int varsta, float pret, int stocul, int sez,int ep) : Film(std::move(numele), varsta, pret, stocul),sezon(sez),episoade(ep)
{
    std::cout<<"\nSezonul: "<<this->sezon;
}
std::string Serial::informatii() const
{
    std::cout<<"Sezonul "<<sezon<<" al serialului are "<<episoade<<" de episoade";
    if(varst_necesara() == 18) return " si este dedicat strict pentru adulti!\n";
    else if(varst_necesara() >= 14) return " si poate fi vizionat numai cu acordul parintilor!\n";
    else return " si este pentru copii!!\n";
}
std::ostream& operator<<(std::ostream& out, const Serial& s)
{
    if(s.in_stoc())out<<"Este DISPONIBIL\n";
    else out<<"STOC EPUIZAT\n";
    out<<s.informatii();
    out<<"-------------------------------------------------------------------";
    return out;
    //AFISARE STOC SI CATEGORIE VARSTA
}
