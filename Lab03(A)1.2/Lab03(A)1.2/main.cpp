/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(A)1.2
NOM DU FICHIER : main.cpp
DATE : 2022-09-09
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>
using namespace std;
int main() {

	int n1;
	int n2;
	int temps;

	cout << "Quelle est la valeur de n1?" << endl;
	cin >> n1;
	cout << "Quelle est la valeur de n2?" << endl;
	cin >> n2;

	temps = n1;
	n1 = n2;
	n2 = temps;

	cout << "Les valeurs ont ete interchangees." << endl;
	cout << "La valeur de n1 est " << n1 << endl;
	cout << "La valeur de n2 est " << n2 << endl;
	system("PAUSE>0");
}





