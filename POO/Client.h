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
    void cumpara(Film& f);
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
    std::cout<<"\nClientul nostru "<<this->nume_client<<" are varsta de "<<this->varsta;
}//CITIRE CLIENT

void Client::cumpara(Film& f)
{
    scade_buget(f);
    //adauga_caserie(a);
    film.push_back(f);
    std::cout<<"\nA cumparat filmul "<<f.get_name()<<" .";

}//ADAUGA UN FILM IN COLECTIE

void Client::vizioneaza(Film& f)
{
    std::cout<<"\nA vazut filmul "<<f.get_name()<<" .";
    for (int i=0; i<film.size(); ++i)
        if (film[i].get_name()==f.get_name())
            film.erase(film.begin()+i);
}//VIZIONEAZA FILM DIN COLECTIE

std::ostream& operator<<(std::ostream& out, const Client& c)
{
    out << "\nColectia de filme a clientului contine :\n";

    copy(begin(c.film), end(c.film) - 1,std::ostream_iterator<Film>(out, ","));

    if (c.film.size() > 0)
    {
        out << c.film.at(c.film.size() - 1) << ' ';
    }
    out<<"\n"<<c.nume_client<<" mai are "<<c.buget<<" de lei in portofel.";
    return out;
}//AFISEAZA COLECTIA DE FILME

#endif //POO_CLIENT_H
