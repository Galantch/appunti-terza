/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   // struttura del nuovo tipo di dato
    struct coppia {
        int numero1;
        int numero2;
    };
    // variabile di tipo coppia
    coppia x, y;
    cout<< "primo numero ";
    cin>> x.numero1;
    cout<< "secondo numero ";
    cin>> x.numero2;
    cout<< " coppia numeri "<< x.numero1 << " - "<< x.numero2<<endl;
    y=x;
    cout<< "coppia numeri "<< y.numero1 << " - "<< y.numero2 << endl;
    return 0;
}