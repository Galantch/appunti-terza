#include <iostream>

using namespace std;

int main() {
    int n, i;
    double media;
    
    struct tripla {
        double n1;
        double n2;
        double n3;
    };
    
    tripla x;
    
    cout << "Quante triple devo elaborare? " << endl;
    cin >> n;
    
    i = 1;
    while (i <= n) {
        cout << "Primo numero della tripla " << i << ": ";
        cin >> x.n1;
        
        cout << "Secondo numero della tripla " << i << ": ";
        cin >> x.n2;
        
        cout << "Terzo numero della tripla " << i << ": ";
        cin >> x.n3;
        
        media = (x.n1 + x.n2 + x.n3) / 3.0;
        cout << "La tua media è " << media << endl << endl;
        
        i++
    }
    
    return 0;
}