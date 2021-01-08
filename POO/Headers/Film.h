//
// Created by mihai on 12/1/2020.
//

#ifndef POO_FILM_H
#define POO_FILM_H

#include <iostream>
#include <string>

class Film {
    std::string nume;
    int varsta_necesara;
    float pret;
    int stoc;

    friend class Film_builder;

public:
    virtual ~Film() = default;

    Film(std::string numele, int varsta, float pretul, int stocul);

    std::string get_name() const;

    float get_pret() const;

    virtual std::string informatii() const;

    bool in_stoc() const;

    int varsta() const;

    Film &operator=(const Film &);

    friend std::ostream &operator<<(std::ostream &out, const Film &f);

    void AfisareFilmB();
}; //CLASA FILM

#endif //POO_FILM_H
