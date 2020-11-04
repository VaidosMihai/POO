#include <iostream>
#include "Filme.h"
#include "Angajat.h"
#include "Client.h"


int main()
{
    std::cout<<"Acestia sunt angajatii:";
    Angajat A("Grigore",1,1);
    Angajat B("Andreea",2,1);
    Angajat C("Jon",3,2);

    std::cout<<"\n";

    Filme D("Horror","Vampires",10.55,23,18);
    D.informatii();
    Filme E("Actiune","X-Men",15.55,0,18);
    E.informatii();
    Filme F("Aventura","WALL-E",20,5,14);
    F.informatii();
    Filme G("Comedie","Cars",18.55,14,12);
    G.informatii();

    std::cout<<"\n";

    Client H("Bogdan",15,"Cars");
    Client I("George",18,"X-Men");
}
