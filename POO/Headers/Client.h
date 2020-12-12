//
// Created by mihai on 12/1/2020.
//

#ifndef POO_CLIENT_H
#define POO_CLIENT_H

#include <iostream>
#include <vector>
#include <string>
#include "../Headers/Film.h"
#include "../Headers/Angajat.h"

class Client{
    std::string nume_client;
    int varsta;
    double buget;
    std::vector<Film> filme;
public:

    Client(std::string nume,int varst,double bani);
    static void sterge_vector(Client &c);
    void cumpara(Film& f,Angajat& a);
    void vizioneaza(Film& f);
    void scade_buget(Film& f);
    friend std::string Film::get_name() const;
    friend std::ostream& operator<<(std::ostream& out, const Client& c);
}; //CLASA CLIENT

#endif //POO_CLIENT_H
