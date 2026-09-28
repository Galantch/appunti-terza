#include <iostream>
using namespace std;
int main()
{
    // modello costi
    double costoU1, costoU2, costoU3;
    double costoN1, costoN2, costoN3;
    double distanza1, distanza2;
    // variabili input
    double peso, distanza;
    double sogliaPeso;
    char scelta;
    char classe;
    // variabile intermedia - costo previsto associato distanza / classe
    double costo;
    // caricamento modello
    distanza1=100;
    distanza2=500;
    costoU1=3.5;
    costoU2=4.0;
    costoU3=5.0;
    costoN1=1.0;
    costoN2=1.5;
    costoN3=2.0;
    sogliaPeso=100.0;

    cout<<"Non si possono spedire pacchi superiori a "<< sogliaPeso<<endl;
    cout<<"Digita S se vuoi continuare - N se vuoi interrompere "<<  endl;
    cin>> scelta;
    while(scelta != 'N' && scelta != 'S'){
        cout<< " Errore - Devi digitare S vuoi continuare - N se vuoi interrompere "<<endl;
        cin>>scelta;
    }
    if(scelta=='N'){
        return 0; // successivamente - passso cliente successivo
    }
    for(int i=1; i<=6; i++){
        cout<<"Digita peso pacco in Kg: sono accettate soltanto spedizioni con peso inferiore a "<<sogliaPeso<<endl;
    cin>>peso;
    // controllo input
    while(peso>sogliaPeso){
        cout<<"peso errato non può essere superiore a "<<sogliaPeso <<endl;
        cout<<"Digita peso pacco in Kg: sono accettate soltanto spedizioni con peso inferiore a "<<sogliaPeso<<endl;
        cin>>peso;
    }
    cout<<"Digita distanza in Km "<<endl;
    cin>>distanza;
    cout<<"Digita N spedizione normale - U spedizione urgente "<<endl;
    cin>>classe;
    while(classe != 'N' && classe != 'U'){
        cout<<"Errore - Devi digitare N spedizione normale - U spedizione urgente "<<endl;
        cin>>classe;
    }
    // ricerca costo per KG in funzione della distanza e della classe
    if(classe=='N'){
            if (distanza<distanza1){
                costo= costoN1;
                }
            else {
                if (distanza<distanza2){
                    costo= costoN2;
                }
                else {
                    costo= costoN3;
                }
            }

        }
    else
     {
            if (distanza<distanza1){
                costo= costoU1;
                }
            else {
                if (distanza<distanza2){
                    costo= costoU2;
                }
                else {
                    costo= costoU3;
                }
            }
     }
    // cout<<" costo per kg associato distanza / classe "<< costo<<endl;
    costoTot= peso * costo;
    cout<< "costo totale "<<costoTot;
    }

    return 0;
}
