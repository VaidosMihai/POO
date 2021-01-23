#include <iostream>
#include "Headers/Film.h"
#include "Headers/Angajat.h"
#include "Headers/Client.h"
#include "Headers/Serial.h"
#include "CPP/Builder_Film.cpp"

int main() {
    std::cout << "Angajatii magazinului:";
    Angajat A("Grigore", "Filme Actiune", 0);

    std::cout << "\n";

    Film f1("Cars", 8, 18.49, 12);
    std::cout << f1;
    Film f2("X-MAN", 18, 15.49, 0);
    std::cout << f2;
    Film f3("WALL-E", 14, 19.99, 5);
    std::cout << f3;
    Film f4("Vampire", 18, 10.49, 23);
    std::cout << f4;
    Serial s1("The 100", 18, 10.99, 15, 1, 24);
    std::cout << s1;
    Serial s2("Regular Show", 10, 5.49, 20, 1, 10);
    std::cout << s2;
    Film_builder fb;
    FilmB f5;
    f5 = fb.nume("Avangers").varsta_necesara(14).pret(13.55).stoc(4).build();
    f5.AfisareFilmB();

    Client client1("George", 18, 100);
    client1.cumpara(f1, A);
    client1.cumpara(f2, A);
    client1.cumpara(f3, A);
    client1.cumpara(f4, A);
    client1.cumpara(s1, A);
    client1.vizioneaza(f3);
    std::cout << client1 << std::endl; // afiseaza colectie filme client

    Client client2("Aurel", 10, 20);
    client2.cumpara(f3, A);
    client2.cumpara(f1, A);
    client2.cumpara(s1, A);
    client2.cumpara(s2, A);
    std::cout << client2 << std::endl;

    std::cout << "\nMagazin inchis \n" << A;

}
