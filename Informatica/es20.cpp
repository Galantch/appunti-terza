/*
Un negozio applica uno sconto del 5% per acquisti fino a 50€, uno sconto del
10% per acquisti tra 50€ e 100€ e uno sconto del 20% per acquisti superiori a 100€.
Progettare un algoritmo che, a partire dall'importo totale dell'acquisto, determini lo
sconto e il prezzo scontato da pagare.
*/
#include<iostream>
using namespace std;
int main(){
    // dichiarazioni
    double prezzo, soglia1, soglia2;
    // assegnazioni
    soglia1=50.0;
    soglia2=100.0;
    // Input del prezzo
    cout<<"Quanto e' l'importo totale dell'acquisto in euro?"<<endl;
    cin>>prezzo;
    // Condizioni if
    if(prezzo<=soglia1){
        prezzo=prezzo-(prezzo/20);
    }
    else{
        if(prezzo<=soglia2){
            prezzo=prezzo-(prezzo/10);
        }
        else{
            prezzo=prezzo-(prezzo/5);
        }
    }
    // Risultato finale
    cout<<"L'importo totale dopo lo sconto e' di "<<prezzo;
    return 0;
}
