/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(A)1.8
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/


#include <iostream>
using namespace std;

int main() {

	float a;
	float b;
	float c;

	cout << "Quelle est la valeur du cote A ?" << endl;
	cin >> a;
	cout << "Quelle est la valeur du cote B ?" << endl;
	cin >> b;

	c = (sqrt((pow(a, 2)) + (pow(b, 2))));

	cout << "La longueur du cote C est de " << c << endl;
	system("PAUSE>0");
}