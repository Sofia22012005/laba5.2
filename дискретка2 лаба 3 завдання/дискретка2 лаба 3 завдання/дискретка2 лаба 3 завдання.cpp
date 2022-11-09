#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <conio.h>
using namespace std;
int main() {
	int a[4] = { 1,5,7,9 }, b[3] = { 0,6,7 };
	cout << "AxB={";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			cout << '(' << a[i] << ',' << b[j] << ");";
	}
	cout << '}' << endl << "A^2={"; for
		(int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cout << '(' << a[i] << ',' << a[j] << ");";
	}
	cout << '}' << endl;
	_getch();
	return 0;
}