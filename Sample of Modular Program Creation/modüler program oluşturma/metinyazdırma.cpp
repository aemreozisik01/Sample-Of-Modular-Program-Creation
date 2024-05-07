#include "metinyazdýrma.h"
#include <iostream>
using namespace std;

void yildizyazdirma() {
	int a;
	char b;
	cout << "Olusacak sekil ornek olarak soyledir: " << endl;
	cout << "*" << endl;
	cout << "**" << endl;
	cout << "***" << endl;
	cout << "****" << endl;
	cout << "......." << endl;
	cout << "Please enter the number= ";
	cin >> a;
	cout << "Please enter the character= ";
	cin >> b;
	for (int i = 1; i <= a; i++) {
		for (int j = i; j > 0; j--) {
			cout <<b;
		}
		cout << endl;
	}

}


void tebrikmesaji() {
	cout << "Baþarýyla modüler program oluþturdunuz,Tebrikler!!" << endl;
}