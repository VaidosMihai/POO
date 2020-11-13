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

    Filme film1 ("Cars", 12 ,18.55,12);
    std::cout<<film1;
    Filme film2 ("X-MAN", 18,15.55,0);
    std::cout<<film2;
    Filme film3 ("WALL-E",14,20,5);
    std::cout<<film3;
    Filme film4 ("Vampire",18,10.55,23);
    std::cout<<film4;

    Client client1("George",18);
    client1.cumpara(film1);
    client1.cumpara(film2);
    client1.vizioneaza(film1);

    std::cout << client1 << std::endl;


    return 0;
}
