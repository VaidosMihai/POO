#include <iostream>
#include "Filme.h"
#include "Angajat.h"
#include "Client.h"


int main()
{
    std::cout<<"Angajatii magazinului:";
    Angajat A("Grigore",1);
    Angajat B("Andreea",2);
    Angajat C("Jon",3);

    std::cout<<"\n";

    Film film1 ("Cars", 8 ,18.55,12);
    std::cout<<film1;
    Film film2 ("X-MAN", 18,15.55,0);
    std::cout<<film2;
    Film film3 ("WALL-E",10,20,5);
    std::cout<<film3;
    Film film4 ("Vampire",18,10.55,23);
    std::cout<<film4;

    Client client1("George",18,100);
    client1.cumpara(film1,A);
    A.adauga_caserie(film1);
    client1.cumpara(film2,A);
    client1.cumpara(film3,A);
    client1.cumpara(film4,A);
    client1.vizioneaza(film3);
    std::cout << client1 << std::endl; // afiseaza colectie filme client

    Client client2("Aurel",10,20);
    client2.cumpara(film3,B);
    client2.cumpara(film2,B);
    std::cout<<client2<<std::endl;

    std::cout<<"MAGAZINUL SE INCHIDE\n"<<A<<B;

    return 0;
}
