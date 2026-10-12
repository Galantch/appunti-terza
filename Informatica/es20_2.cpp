#include <iostream>
using namespace std;
int main()
{
    // modello dati
    double soglia1, soglia2, perc1, perc2, perc3, importo, percSconto, sconto, prezzoScontato;
    soglia1 = 50.0;
    soglia2 = 100.0;
    perc1 = 0.05;
    perc2 = 0.10;
    perc3 = 0.20;
    cout << "Fornire l'importo in euro" << endl;
    cin >> importo;
    while(importo <= 0){
        cout << "L'importo inserito non è positivo. Inserire un valore positivo in euro" << endl;
        cin >> importo;
    }
    if(importo < soglia1){
        percSconto = perc1;
    }
    else{
        if(importo < soglia2){
            percSconto = perc2;
        }
        else{
            percSconto = perc3;
        }
    }
    sconto = importo * percSconto;
    prezzoScontato = importo * (1 - percSconto);
    cout << "Lo sconto e' " << sconto << endl;
    cout << "Il prezzo scontato e' " << prezzoScontato;
    return 0;
}
