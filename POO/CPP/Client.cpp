//
// Created by mihai on 12/1/2020.
//

#include "../Headers/Client.h"

void Client::scade_buget(Film &f) {
    buget = buget - f.get_pret();
}//SCADE BUGETUL CLIENTULUI

Client::Client(std::string nume, int varst, float bani) {
    this->nume_client = nume;
    this->varsta = varst;
    this->buget = bani;
    std::cout << "\nClientul nostru " << this->nume_client << " are varsta de " << this->varsta << " ani.\n";
}//CITIRE CLIENT

void Client::cumpara(Film &f, Angajat &a) {
    if (varsta >= f.varsta()) //verificare varsta necesara
    {

        if (f.in_stoc()) //verificare daca este pe stoc
        {
            if (buget > f.get_pret()) //verificare daca clientul are suficienti bani
            {
                a.adauga_caserie(f);
                scade_buget(f);
                filme.push_back(f);
                std::cout << "A cumparat " << f.get_name() << ". \n";
            } else
                std::cout << "Nu poate cumpara articolul \"" << f.get_name() << "\" deoarece nu are suficienti bani.\n";
        } else std::cout << f.get_name() << " nu mai este pe stoc. \n";
    } else std::cout << "Nu indeplineste varsta necesara pentru " << f.get_name() << ".\n";

}//ADAUGA UN FILM IN COLECTIE

void Client::vizioneaza(Film &f) {
    std::cout << "Tocmai a vazut filmul " << f.get_name() << " .\n";
    for (int i = 0; i < filme.size(); ++i)
        if (filme[i].get_name() == f.get_name()) {
            filme.erase(filme.begin() + i);
            break;
        }
}//VIZIONEAZA FILM DIN COLECTIE
void Client::sterge_vector(Client &c) {
    c.filme.clear();
}

std::ostream &operator<<(std::ostream &out, const Client &c) {
    int max = c.filme.size();
    if (max > 1)out << "\nColectia de filme a lui " << c.nume_client << " contine : ";
    else out << "\n" << c.nume_client << " detine doar filmul ";
    for (int i = 0; i < max; i++) {
        if (max > 1) {
            out << c.filme[i].get_name();
            if (i != max - 1) out << ", ";
            else out << " ";
        } else out << c.filme[i].get_name();
    }
    if (c.buget > 0)out << ".\n" << c.nume_client << " mai are " << c.buget << " de lei in portofel.";
    else out << "\n" << c.nume_client << " a ramas fara bani.\n";
    Client::sterge_vector(const_cast<Client &>(c));
    return out;
}//AFISEAZA COLECTIA DE FILME