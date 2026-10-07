#include <iostream>

using namespace std;

int main(){
    int P;
    char V;

    cout << "Punteggio? " << endl;
    cin >> P;

    if(P < 0 || P > 100){
        cout << "Errore!";
    }
    else{
        if(P <= 40){
            V = 'E';
        }
        else{
            if(P <= 60){
                V = 'D';
            }
            else{
                if(P <= 70){
                    V = 'C';
                }
                else{
                    if(P <= 85){
                        V = 'B';
                    }
                    else{
                        V = 'A';
                    }
                }
            }
        }

        cout << "Valutazione = " << V << endl;
    }

    return 0;
}
