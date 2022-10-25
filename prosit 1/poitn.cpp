#include "point.h"
#include <iostream>
#include <math.h>
using namespace std;
void point::demande_coordonnees(void)
{
	int xa;
	int xo;
	int ya;
	int yo;
	cout << "Bonjour. Dans cet exercice vous allez me donner les coordonnees de 2 points et je vous donnerai la distance entre ces 2: " << endl;
	cout << "Veuillez me renseigner l'abscisse de x : " << endl;
	cin >> xa;
	cout << "Veuillez me renseigner l'ordonnee de x : " << endl;
	cin >> xo;
	cout << "Veuillez me renseigner l'abscisse de y : " << endl;
	cin >> ya;
	cout << "Veuillez me renseigner l'ordonnee de y : " << endl;
	cin >> yo;
	cout << "Vos coordonnees sont les suivantes : " << endl;
	cout << "x(" << xa; cout << ", "; cout << xo; cout << ")" << endl;
	cout << "y(" << ya; cout << ", "; cout << yo; cout << ")" << endl;
	cout << "C'est parti !" << endl;
	point* o1;
	o1 = new point();
	o1->calcul_distance(xa, xo, ya, yo);
}

void point::calcul_distance(int xa, int xo, int ya, int yo)
{
	float distance;
	distance = sqrt((ya - xa) ^ 2 + (yo - xo) ^ 2);
	cout << "Voici la distance entre vos 2 points : ";
	cout << distance;
}
