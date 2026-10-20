#include <iostream>
#include <string>
using namespace std;

int main(){
    double media, redditoFamiliare;
    double quotaFissa, quotaAgg1, quotaAgg2, quotaAgg3, scontoPerc, risultato;
    double soglia1, soglia2, sogliaReddito;
    string continuare;
    double contatore;

    quotaFissa = 18.00;
    quotaAgg1 = 25.00;
    quotaAgg2 = 17.50;
    quotaAgg3 = 0.0;
    scontoPerc = 40.0/100.0;
    soglia1 = 7.0;
    soglia2 = 8.0;
    sogliaReddito = 16000.00;
    contatore = 1;

    cout << "Vuoi procedere?: ";
    cin >> continuare;

    while(continuare == "si"){
        cout << "Cliente numero" << contatore <<endl;
        cout << "Inserisci la media: ";
        cin >> media;
        cout << "Inserisci il reddito familiare: ";
        cin >> redditoFamiliare;

        risultato = quotaFissa;

        if(media < soglia1){
            risultato = risultato + quotaAgg1;
        }
        else{
            if(media < soglia2){
                risultato = risultato + quotaAgg2;
            }
            else{
                risultato = risultato + quotaAgg3;
            }
        }
        if(redditoFamiliare < sogliaReddito){
            risultato = risultato * (1 - scontoPerc);
        }
        cout << "Importo per l'iscrizione: " << risultato << " euro" << endl;
        cout << "Vuoi procedere?: ";
        cin >> continuare;
        contatore = contatore + 1;
    }
}
