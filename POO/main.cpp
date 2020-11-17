#include <iostream>
#include "Filme.h"
#include "Angajat.h"
#include "Client.h"


int main()
{
    std::cout<<"Angajatii magazinului:";
    Angajat A("Grigore",1,1);
    Angajat B("Andreea",2,1);
    Angajat C("Jon",3,2);

    std::cout<<"\n";

    Film film1 ("Cars", 12 ,18.55,12);
    std::cout<<film1;
    Film film2 ("X-MAN", 18,15.55,0);
    std::cout<<film2;
    Film film3 ("WALL-E",14,20,5);
    std::cout<<film3;
    Film film4 ("Vampire",18,10.55,23);
    std::cout<<film4;

    Client client1("George",18,100);

    client1.cumpara(film1);
    A.adauga_caserie(film1);
    client1.cumpara(film2);
    client1.cumpara(film3);
    client1.cumpara(film4);
    std::cout << client1 << std::endl; // afiseaza colectie filme client
    client1.vizioneaza(film3);


    return 0;
}
