#include "matematik.h"
int factoriel(int a) {
	int fact = 1;
	for (int i = 1; i <= a; i++) {
		fact *= i;
	}
	return fact;
}

int addition(int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}