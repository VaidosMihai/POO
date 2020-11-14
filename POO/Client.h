//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#include <vector>
#include <string>
#include "Film.h"
#ifndef POO_CLIENT_H
#define POO_CLIENT_H

class Client {
    std::string nume_client;
    int varsta;
    std::vector<Film> film;
public:
    Client(std::string,int);
    void cumpara(Film& film);
    void vizioneaza(Film& film);
    friend std::ostream& operator<<(std::ostream& out, const Client& c);
}; //CLASA CLIENT

Client::Client(std::string NUME,int VARSTA) //CITIRE CLIENT
{
    this->nume_client = NUME;
    this->varsta = VARSTA;
    std::cout<<"\nClientul nostru "<<this->nume_client<<" are varsta de "<<this->varsta;
}

void Client::cumpara(Film& f)  //ADAUGA UN FILM IN COLECTIE
{
    film.push_back(f);
}

void Client::vizioneaza(Film& f) //VIZIONEAZA PRIMUL FILM DIN COLECTIE
{
    film.erase(film.begin());
}

std::ostream& operator<<(std::ostream& out, const Client& c) //AFISEAZA COLECTIA DE FILME
{
    out << "\nColectia de filme a clientului contine :\n";

    copy(begin(c.film), end(c.film) - 1,std::ostream_iterator<Filme>(out, " , "));
    if (c.film.size() > 0)
    {
        out << c.film.at(c.film.size() - 1) << ' ';
    }
    out<<"\n";
    return out;
}

#endif //POO_CLIENT_H
