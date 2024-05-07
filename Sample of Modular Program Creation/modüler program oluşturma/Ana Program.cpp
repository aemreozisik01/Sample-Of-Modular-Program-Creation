#include <iostream>
#include <vector>
#include "matematik.h"
#include "metinyazdýrma.h"

using namespace std;

int main() {
	int a, b = 0;
	setlocale(LC_ALL, "Turkish");
	cout << "Gireceðiniz iki sayý ile birazdan toplama çýkarma ve faktöriyel iþlemleri yapýlacaktýr!" << endl;
	cout << "Lütfen bu iki sayýyý giriniz= ";
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