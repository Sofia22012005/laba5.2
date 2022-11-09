#include <cmath>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main() {
	double x;
	double y;
	double R;
	cout << "Enter R:"; cin >> R;
	srand((unsigned)time(NULL));
	//input
	for (int i = 0; i <= 10; i++)
	{
		cout << "Enter x :";cin>>x ;
		cout << "Enter y :"; cin >> y;

		if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R) || ((x >= 0 && x <= 2 * R) && (y <= 0 && y >= -R)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}

	cout << "it`s time for random!"<<endl;
	//random
	for (int i = 0; i <= 10; i++)
	{
		x = 4 * R * rand() / RAND_MAX - 2 * R;
		y = 4 * R * rand() / RAND_MAX - 2 * R;
		if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R) || ((x >= 0 && x <= 2 * R) && (y <= 0 && y >= -R)))

			cout << " |x|" << setw(8) << setprecision(4) << x << "|y|" << setw(8) << setprecision(4) << y << "" << "yes" << endl;
		else
			cout << " |x|" << setw(8) << setprecision(4) << x << "|y|" << setw(8) << setprecision(4) << y << "" << "no" << endl;
	}

	return 0;
}