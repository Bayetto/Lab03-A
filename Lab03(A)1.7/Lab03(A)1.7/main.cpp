/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(A)1.1
NOM DU FICHIER : main.cpp
DATE : 2022-09-09
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int pN1;
	int qN1;
	int pN2;
	int qN2;

	cout << "Quel est le prix unitaire de no1 ? ";
	cin >> pN1;
	cout << "Quelle est la quantité en inventaire no1 ? ";
	cin >> qN1;
	cout << "Quel est le prix unitaire de no2 ? ";
	cin >> pN2;
	cout << "Quelle est la quantité en inventaire no2 ? ";
	cin >> qN2;
	cout << "==================================== \nNo  Qté Prix Total \nNo1 " << qN1 << " " << pN1 << "$ " << qN1 * pN1 << "$ " << " \nNo2 " << qN2 << " " << pN2 << "$ " << qN2 * pN2 <<"$ " << " \n ==================================== \n  " << qN1 + qN2 << " " << (qN1 * pN1) + (qN2 * pN2) << "$ " << endl;
	system("PAUSE>0");

}