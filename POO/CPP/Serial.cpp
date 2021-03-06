//
// Created by mihai on 12/11/2020.
//

#include "../Headers/Serial.h"

#include <utility>

Serial::Serial(std::string numele, int varsta, float pret, int stocul, int sez, int ep) : Film(std::move(numele),
                                                                                               varsta, pret, stocul),
                                                                                          sezon(sez), episoade(ep) {
    std::cout << "\nSezonul: " << this->sezon;
}

std::string Serial::informatii() const {
    std::cout << "Sezonul " << sezon << " al serialului are " << episoade << " de episoade\n";
    return Film::informatii();
}
