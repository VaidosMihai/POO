//
// Created by mihai on 1/8/2021.
//
#include <iostream>
#include <string>

class FilmB {
    std::string nume;
    int varsta_necesara;
    double pret;
    int stoc;

    friend class Film_builder;

public:
    FilmB() = default;

    void AfisareFilmB() {
        std::cout << "\nNume: " << nume << "\nVarsta necesara: " << varsta_necesara << "\nPretul: " << pret
                  << "\nStoc: " << stoc << "\n";
    }

};

class Film_builder {
    FilmB f;
public:

    Film_builder() = default;

    Film_builder &nume(std::string nume_film) {
        f.nume = nume_film;
        return *this;
    }

    Film_builder &varsta_necesara(int varsta) {
        f.varsta_necesara = varsta;
        return *this;
    }

    Film_builder &pret(float pret_film) {
        f.pret = pret_film;
        return *this;
    }

    Film_builder &stoc(int nr) {
        f.stoc = nr;
        return *this;
    }

    FilmB build() {
        return f;
    }
};

