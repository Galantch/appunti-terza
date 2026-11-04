/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct coppia {
        double num1;
        double num2;
    };
    coppia x;
    int scelta;
   
    

    do{
        cout<< " 1 - somma "<<endl;
        cout<< " 2 - sottrazione "<<endl;
        cout<< " 3 - moltiplicazione "<<endl;
        cout<< " 4 - divisione "<<endl;
        cout<< " 9 - esci "<<endl;
        cin >> scelta;
       
        switch (scelta){
          std::system("cls"); 
          case 1: 
                  cout<< " primo addendo ";
        	  cin>>x.num1;
                  cout<< " secondo addendo ";
       		  cin>>x.num2;
		  cout<< " somma: " << x.num1 + x. num2<< endl;
                  break;
          case 2: cout<< " primo addendo ";
        	  cin>>x.num1;
                  cout<< " secondo addendo ";
       		  cin>>x.num2;
		  cout<< " sottrazione: " << x.num1 - x. num2<< endl; 
                  break;
          case 3: cout<< " primo fattore ";
        	  cin>>x.num1;
                  cout<< " secondo fattore ";
       		  cin>>x.num2;
		  cout<<  " prodotto " << x.num1 * x. num2<< endl; 
                  break;
          case 4: if(x.num2==0) 
                     cout << "divisione - operazione impossibile "<<endl;
                  else    
                     cout<<  " divisione "<< x.num1/x.num2<<endl;
                  break;
          case 9:break;       
          default:cout<< " operazione non prevista"<<endl;
        }
    } while (scelta !=9);
    return 0;
}