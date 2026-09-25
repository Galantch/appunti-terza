#include <stdio.h>
#include <iostream>

int main()
{
    double peso;
    double distanza1, distanza2, distanza;
    double costo, costo1, costo2;
    double totale;
    // assegnazione
    distanza1 = 100.0;
    distanza2 = 500.0;
    costo1 = 1.0;
    costo2 = 2.0;
    std::cout<<"inserisci distanza"<<std::endl;
    std::cin>>distanza;
    std::cout<<"inserisci peso"<<std::endl;
    std::cin>>peso;
    if(distanza < distanza1) {
        costo = costo1;
    }
    else {
        costo = costo2;
    }
    std::cout<<"costo al kg "<<costo<<std::endl;
    totale = peso * costo;
    std::cout<<"costo spedizione "<<totale;
    return 0;
}