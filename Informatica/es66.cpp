#include <iostream>
using namespace std;

int main(){

    int partecipanti, soglia1, soglia2;
    double perc, costo;
    soglia1 = 15;
    soglia2 = 40;
    perc = 0.10;
    costo = 120.00;

    cout << "Inserire il nr di partecipanti" << endl;
    cin >> partecipanti;

    while(partecipanti <= 0){
        cout << "Numero non valido deve essere >0" << endl;
        cin >> partecipanti;
    }

    int gratuita, paganti;
    gratuita = partecipanti / soglia1;

    if(partecipanti > soglia2){
        costo = costo * (1 - perc);
    }
    paganti = partecipanti - gratuita;
    costo = costo * paganti;

    int pullman, sogliaPullman;
    sogliaPullman = 50;
    if (partecipanti % sogliaPullman == 0) {
        pullman = partecipanti / sogliaPullman;
    }
    else {
        pullman = partecipanti / sogliaPullman + 1;
    }
    int postiVuoti;
    postiVuoti = pullman * sogliaPullman - partecipanti ;
    cout << "Numero Gratuita - " << gratuita<<endl;
    cout << "Costo Totale - " << costo<<endl;
    cout << "Pullman - " << pullman<<endl;
    cout << "Posti vuoti - " << postiVuoti;
    return 0;
}
