//Introduction au CPP, � transcrire sur visual studio
//Source

#include <stdio.h>
//#include "TPoint.h"
#include <iostream>
#include "CPoint.h"


using namespace std;

int main()
{

    //Instance de classe CPoint
    CPoint ptA; //Appel du constructeur sans param�tres

    CPoint ptB(15, 12, "nom point"); //Appel du constructeur avec param�tres

    int n_X, n_Y;


    CPoint tabPoint[100];

    for (int i = 0; i < 100; i++)
        tabPoint[i] = ptB; //L'op�rateur �gal est surcharg�





    //Ou std::cout
    cout << "Entrez le premier entier" << endl;

    cin >> n_X;


    cout << "Entrez le second entier" << endl;

    cin >> n_Y;

    ptB.setnX(n_X);
    ptB.setnY(n_Y);


    printf("x de A : %d\n", ptA.getnX());
    printf("y de A : %d\n", ptA.getnY());

    cout << "x de B :" << ptB.getnX() << endl;
    cout << "y de B :" << ptB.getnY() << endl;


    ptA.setnX(15);
    ptA.setnY(12);

    printf("x de A : %d\n", ptA.getnX());
    printf("y de A : %d\n", ptA.getnY());

    return 0;
}
