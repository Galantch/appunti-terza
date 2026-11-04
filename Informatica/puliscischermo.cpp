/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

void pulisciSchermo() {
    // \033[2J pulisce lo schermo, \033[H sposta il cursore in alto a sinistra
    std::cout << "\033[2J\033[H" << std::flush;
}

int main() {
    std::cout << "Questo testo sparira'..." << std::endl;
    
    pulisciSchermo();
    
    std::cout << "Schermo pulito con codice ANSI!" << std::endl;
    return 0;
}