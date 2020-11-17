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
    std::vector<Film> film;
public:
    Client(std::string,int);
    void cumpara(Film& film);
    void vizioneaza();
    friend std::ostream& operator<<(std::ostream& out, const Client& c);
}; //CLASA CLIENT

Client::Client(std::string numele,int varst)
{
    this->nume_client = numele;
    this->varsta = varst;
    std::cout<<"\nClientul nostru "<<this->nume_client<<" are varsta de "<<this->varsta;
}//CITIRE CLIENT

void Client::cumpara(Film& f)
{
    film.push_back(f);
}//ADAUGA UN FILM IN COLECTIE

void Client::vizioneaza()
{
    film.erase(film.begin());
}//VIZIONEAZA PRIMUL FILM DIN COLECTIE

std::ostream& operator<<(std::ostream& out, const Client& c)
{
    out << "\nColectia de filme a clientului contine :\n";

    copy(begin(c.film), end(c.film) - 1,std::ostream_iterator<Film>(out, " , "));

    if (c.film.size() > 0)
    {
        out << c.film.at(c.film.size() - 1) << ' ';
    }
    out<<"\n";
    return out;
}//AFISEAZA COLECTIA DE FILME

#endif //POO_CLIENT_H
