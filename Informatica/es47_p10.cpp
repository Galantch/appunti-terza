/*
Biglietto del cinema. Un cinema applica una tariffa insolita: 5 euro per coloro che sono alti fino 1,5m. e
maggiora il biglietto di 10 centesimi per ogni centimetro che eccede la soglia della statura di un metro
e cinquanta. Detta “a” l’altezza data in cm., descrivere la procedura risolutiva da applicare (algoritmo)
e successivamente disegnare il relativo flow chart. (Suggerimento: indica con “a” l’altezza, cioè la
variabile di ingresso e con “prezzo” la variabile di uscita, cioè il costo del biglietto). 3 amici, Aldo,
Giovanni e Giacomo sono alti, rispettivamente: 148cm, 168 cm, 180 cm. Quanto paga ciascuno di essi?
*/
#include <iostream>
using namespace std;
int main(){
    double a, prezzo, soglia, differenza, aumento, prezzoOriginario;
    prezzo = 0;
    soglia = 150.0;
    aumento = 0.1;
    prezzoOriginario = 5.0;
    differenza = 0;
    cout << "Fornire la propria altezza in cm" << endl;
    cin >> a;
    while(a <= 0){
        cout << "ERRORE: inserire un valore positivo" << endl;
        cin >> a;
    }
    if(a > soglia){
        differenza = a - soglia;
    }
    prezzo = prezzoOriginario + (aumento * differenza);
    cout << "Il prezzo del tuo biglietto e' di euro " << prezzo;
    return 0;
}
