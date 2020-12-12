#include <iostream>
#include "Headers/Film.h"
#include "Headers/Angajat.h"
#include "Headers/Client.h"
#include "Headers/Serial.h"


int main()
{
    std::cout<<"Angajatii magazinului:";
    Angajat A("Grigore","Filme Actiune",0);
    Angajat B("Andreea","Filme SF",0);
    Angajat C("Jon","Filme Under 18",0);

    std::cout<<"\n";

    Film f1 ("Cars", 8 ,18.49,12);
    std::cout<<f1;
    Film f2 ("X-MAN", 18,15.49,0);
    std::cout<<f2;
    Film f3 ("WALL-E",14,19.99,5);
    std::cout<<f3;
    Film f4 ("Vampire",18,10.49,23);
    std::cout<<f4;
    Serial s1("The 100", 18, 10.99, 15, 1,24);
    std::cout<<s1;
    Serial s2("Regular Show",10,5.49,20,1,10);
    Client client1("George",18,100);
    client1.cumpara(f1,A);
    client1.cumpara(f2,A);
    client1.cumpara(f3,A);
    client1.cumpara(f4,A);
    client1.cumpara(s1,A);
    client1.vizioneaza(f3);
    std::cout << client1 << std::endl; // afiseaza colectie filme client

    Client client2("Aurel",10,20);
    client2.cumpara(f3,B);
    client2.cumpara(f1,B);
    client2.cumpara(s1,B);
    client2.cumpara(s2,B);
    std::cout<<client2<<std::endl;

    std::cout<<A<<B;

}
