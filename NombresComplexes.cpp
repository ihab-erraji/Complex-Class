// NombresComplexes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complexe.h"
using namespace std;

int main()
{
    Complexe C1(1, 6);
    C1.afficher(); 
    Complexe C2(4, 10);
    C2.afficher();
    //   utilistation des operateurs entre deux complexes:

    Complexe C3 = C1 + C2;    //   utilistation de l'operateur + entre deux complexes
    C3.afficher();
    C3 = C1 - C2;   //    utilistation de l'operateur - entre deux complexes
    C3.afficher();
    Complexe C4 = C2 * C1;   //   utilistation de l'operateur * entre deux complexes
    C4.afficher();
    C4 = C3 / C1;    //    utilistation de l'operateur / entre deux complexes
    C4.afficher();

    // utilistation des operateurs entre un complexe est un réel:

    Complexe C5 = C1 + 5;   //   utilistation de l'operateur + entre un complexe est un réel
    C5.afficher();
    C1 = C1 - 6;   //   utilistation de l'operateur - entre un complexe est un réel
    C1.afficher();
    C4 = C2 / 6;    //   utilistation de l'operateur / entre un complexe est un réel
    C4.afficher();
    C5 = C4 * 3;    //   utilistation de l'operateur * entre un complexe est un réel
    C5.afficher();
    Complexe C6 = C5 - C5;   //   intialisation de complexe nul
    C6.afficher();  // affichage d'un complexe nul

    Complexe C7(0, 6);  //  intialisation d'un complexe avec la partie réel nul
    C7.afficher();
    C1 = C1 - C7;    //  modification du C1 à un complexe où sa partie imaginaire est nul
    C1.afficher();

    C7.Comparaison(C3);  // comparaison de deux nombres complexes

    C5.Comparaison(-2);   // comparaison entre un complexe est un réel

    Complexe C9 = 1 / C7;
    C9.afficher();
  
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
