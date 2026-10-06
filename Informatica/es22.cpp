/*
Gli abbonamenti alla metropolitana di Roma possono essere settimanali (S),
mensili (M) o annuali (A) e valgono per la sola zona centrale (tipo 1), per la sola zona
periferica (tipo 2) o per entrambe le zone (tipo 3). I costi sono  quelli indicati nella
seguente tabella:
Tipo | Settimanale | Mensile | Annuale
1 | 10 | 30 | 250
2 | 5 | 20 | 150
3 | 15 | 40 | 300
Gli abbonamenti che non consentono di viaggiare nelle ore di punta (bassa priorità)
hanno una riduzione del 20%.
Progettare un algoritmo che calcoli il costo dell'abbonamento a partire dalla durata,
dal tipo e dalla priorità.
*/
#include<iostream>
using namespace std;
int main(){

    // definizioni

    char durata, priorita;
    int tipo;
    double costoS1, costoS2, costoS3, costoM1, costoM2, costoM3, costoA1, costoA2, costoA3, costoTot;

    // dichiarazioni modello

    costoS1 = 10.0;
    costoS2 = 5.0;
    costoS3 = 15.0;
    costoM1 = 30.0;
    costoM2 = 20.0;
    costoM3 = 40.0;
    costoA1 = 250.0;
    costoA2 = 150.0;
    costoA3 = 300.0;
    costoTot = 0;
    //durata desiderata

    cout << "Inserire la durata dell'abbonamento desiderato. S - Settimanale | M - Mensile | A - Annuale" << endl;
    cin >> durata;

    // ciclo di controllo

    while(durata != 'S' && durata != 'M' && durata != 'A'){

        cout << "Errore, si deve inserire: S - Settimanale | M - Mensile | A - Annuale" << endl;
        cin >> durata;
    }

    // tipo desiderato

    cout << "Inserire il tipo desiderato: 1 - Sola Zona Centrale | 2 - Sola Zona Periferica | 3 - Entrambe Le Zone" << endl;
    cin >> tipo;

    // ciclo di controllo

    while(tipo != 1 && tipo != 2 && tipo != 3){

        cout << "Errore, si deve inserire: 1 - Sola Zona Centrale | 2 - Sola Zona Periferica | 3 - Entrambe Le Zone" << endl;
        cin >> tipo;
    }

    // priorita' desiderata

    cout << "Inserire la priorita desiderata: A - Alta Priorita' (consente di viaggiare nelle ore di punta) | B - Bassa priorita' (non consente di viaggiare nelle ore di punta)" << endl;
    cin >> priorita;

    // ciclo di controllo

    while(priorita != 'A' && priorita != 'B'){

        cout << "Errore, si deve inserire: A - Alta Priorita' (consente di viaggiare nelle ore di punta) | B - Bassa priorita' (non consente di viaggiare nelle ore di punta)" << endl;
        cin >> priorita;
    }

    if(durata == 'S'){
        if(tipo == 1){
            costoTot = costoS1;
        }
        else if(tipo == 2){
            costoTot = costoS2;
        }
        else{
            costoTot = costoS3;
        }
    }
    else if(durata == 'M'){
        if(tipo == 1){
            costoTot = costoM1;
        }
        else if(tipo == 2){
            costoTot = costoM2;
        }
        else{
            costoTot = costoM3;
        }
    }
    else{
        if(tipo == 1){
            costoTot = costoA1;
        }
        else if(tipo == 2){
            costoTot = costoA2;
        }
        else{
            costoTot = costoA3;
        }
    }

    if(priorita == 'B'){
        costoTot = costoTot - (costoTot / 5);
    }

    cout << "Il costo dell'abbonamento richiesto e' di " << costoTot;
    return 0;
}
