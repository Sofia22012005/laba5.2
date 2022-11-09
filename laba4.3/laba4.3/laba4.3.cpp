#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	float a, b, c, x, xp, xk, step, r;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter c: "; cin >> c;
	cout << "Enter xp: "; cin >> xp;
	cout << "Enter xk: "; cin >> xk;
	cout << "Enter step: "; cin >> step;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << "|" << setw(2) << " " << setw(5) << "result" << setw(3) << "|" << endl;
	cout << "---------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (x < 5 && c != 0)
			r = -a*pow(x,2)-b;
		else
			if (x > 5 && c == 0)
				r = (x-a)/x;
			else
				r = -x/c;



		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << r
			<< " |" << endl;
		cout << "---------------------" << endl;

		x += step;
	}


	return 0;
}
