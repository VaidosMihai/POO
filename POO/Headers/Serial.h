//
// Created by mihai on 12/11/2020.
//

#ifndef POO_SERIAL_H
#define POO_SERIAL_H
#include <iostream>
#include <string>
#include "Film.h"

class Serial:public Film
{
    int sezon;
    int episoade;
public:
    //virtual ~Serial() = default;
    Serial(std::string numele, int varsta, float pret, int stocul, int sez, int episoade);
    std::string informatii()const override;
};

#endif //POO_SERIAL_H
