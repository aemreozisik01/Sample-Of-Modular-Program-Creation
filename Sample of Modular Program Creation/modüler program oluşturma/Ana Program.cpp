#include <iostream>
#include <vector>
#include "matematik.h"
#include "metinyazd�rma.h"

using namespace std;

int main() {
	int a, b = 0;
	setlocale(LC_ALL, "Turkish");
	cout << "Girece�iniz iki say� ile birazdan toplama ��karma ve fakt�riyel i�lemleri yap�lacakt�r!" << endl;
	cout << "L�tfen bu iki say�y� giriniz= ";
	cin >> a;
	cin >> b;
	cout << addition(a, b) << endl;
	cout << subtraction(a, b) << endl;
	cout << factoriel(a) << endl;
	cout << factoriel(b) << endl;
	cout << "------------------------------" << endl;
	yildizyazdirma();
	tebrikmesaji();
}