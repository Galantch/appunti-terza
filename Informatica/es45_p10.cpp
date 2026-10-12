/*
Il cinema ha deciso di offrire uno sconto sul biglietto; in particolare ai minorenni viene applicato uno
sconto del 20%, mentre a tutti gli altri uno sconto del 5%. Dato il prezzo del singolo biglietto e l'età di
un cliente, calcolare e visualizzare il prezzo che deve pagare il cliente per vedere un film.
*/
#include <iostream>
using namespace std;
int main(){
    double prezzoBiglietto, perc1, perc2, prezzoScontato;
    int eta;
    perc1 = 0.20;
    perc2 = 0.05;
    cout << "Quanto e' il prezzo del tuo biglietto?" << endl;
    cin >> prezzoBiglietto;
    while(prezzoBiglietto <= 0){
        cout << "ERRORE: Il prezzo inserito non è positivo. Inserire un prezzo positivo." << endl;
        cin >> prezzoBiglietto;
    }
    cout << "Quanti anni hai?" << endl;
    cin >> eta;
    while(eta <= 0){
        cout << "ERRORE: Il valore inserito non è positivo. Inserire un valore valido positivo" << endl;
        cin >> eta;
    }
    if(eta < 18){
        prezzoScontato = prezzoBiglietto * (1 - perc1);
    }
    else{
        prezzoScontato = prezzoBiglietto * (1 - perc2);
    }
    cout << "Il prezzo scontato e' " << prezzoScontato << " euro";
    return 0;
}
