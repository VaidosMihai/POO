//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#include <vector>
#include <string>
#include "Filme.h"
#ifndef POO_CLIENT_H
#define POO_CLIENT_H

class Client {
    std::string nume_client;
    int varsta;
    double buget;
    std::vector<Film> film;
public:
    Client(std::string,int,double );
    void cumpara(Film& f,Angajat& a);
    void vizioneaza(Film& f);
    void scade_buget(Film& f);
    friend std::ostream& operator<<(std::ostream& out, const Client& c);
}; //CLASA CLIENT
void Client::scade_buget(Film& f)
{
    buget=buget-f.get_pret();
}//SCADE BUGETUL CLIENTULUI

Client::Client(std::string numele,int varst,double bani)
{
    this->nume_client = numele;
    this->varsta = varst;
    this->buget = bani;
    std::cout<<"\nClientul nostru "<<this->nume_client<<" are varsta de "<<this->varsta<<" ani.\n";
}//CITIRE CLIENT

void Client::cumpara(Film& f,Angajat& a)
{
    //adauga_caserie(a);
    if(varsta>=f.varst_necesara())
    {
        if(f.in_stoc())
        {
            a.adauga_caserie(f);
            scade_buget(f);
            film.push_back(f);
            std::cout<<"A cumparat filmul "<<f.get_name()<<". \n";
        }
        else std::cout<<f.get_name()<<" nu mai este in stoc. \n";
    }
    else std::cout<<"Nu a putut cumpara filmul "<<f.get_name()<<" pentru ca este prea mic. \n";

}//ADAUGA UN FILM IN COLECTIE

void Client::vizioneaza(Film& f)
{
    std::cout<<"Tocmai a vazut filmul "<<f.get_name()<<" .\n";
    for (int i=0; i<film.size(); ++i)
        if (film[i].get_name()==f.get_name())
            film.erase(film.begin()+i);
}//VIZIONEAZA FILM DIN COLECTIE

std::ostream& operator<<(std::ostream& out, const Client& c)
{
    out << "\nColectia de filme a lui "<<c.nume_client<<" contine :\n";

    for(int i=c.film.size();i>0;i--)
    {
        out<<c.film.at(c.film.size()-i)<<" ";
    }

    if(c.buget>0)out<<"\n"<<c.nume_client<<" mai are "<<c.buget<<" de lei in portofel.";
    else out<<"\n"<<c.nume_client<<" a ramas fara bani. :(\n";
    return out;
}//AFISEAZA COLECTIA DE FILME

#endif //POO_CLIENT_H
