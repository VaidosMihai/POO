//
// Created by mihai on 12/1/2020.
//

#ifndef POO_FILM_H
#define POO_FILM_H

#include <iostream>
#include <string>

class Film{
    std::string nume;
    int varsta_necesara;
    float pret;
    int stoc;

public:
    virtual ~Film() {};
    Film(std::string numele, int varsta, float pret, int stocul);
    std::string get_name() const;
    double get_pret() const;
    virtual std::string informatii()const;
    bool in_stoc()const;
    int varst_necesara() const;
    Film &operator=(const Film &);
    friend std::ostream& operator<<(std::ostream& out, const Film& f);
}; //CLASA FILM

#endif //POO_FILM_H
