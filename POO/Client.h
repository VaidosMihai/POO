//
// Created by mihai on 11/3/2020.
//
#include <iostream>
#ifndef POO_CLIENT_H
#define POO_CLIENT_H

class Client{
    std::string nume_client;
    int varsta;
    std::string film_dorit;
public:
    Client(std::string,int,std::string);
    Client(Client&);
};
Client::Client(std::string nume_client,int varsta,std::string film_dorit)
{
    this->nume_client = nume_client;
    this->varsta = varsta;
    this->film_dorit = film_dorit;
    std::cout<<"\nNume: "<<this->nume_client<<"\nVarsta: "<<this->varsta<<"\nFilm dorit: "<<this->film_dorit;
}
Client::Client(Client& C)
{
    this->nume_client = C.nume_client;
    this->varsta = C.varsta;
    this->film_dorit = C.film_dorit;
    std::cout<<this->nume_client<<" "<<this->varsta<<" "<<this->film_dorit;
}

#endif //POO_CLIENT_H
