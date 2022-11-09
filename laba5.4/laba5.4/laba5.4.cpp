// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int k, const int N)
{
	double S = 0;
	for (int k=1; k <= N; k++)
		S += 1.0/( (2 * k + 1)*(2 * k + 1));
	return S;
}
double S1(const int k, const int N)
{
	if (k > N)
		return 0;
	else
		return 1.0 / ((2 * k + 1) * (2 * k + 1)) + S1( k+1,N);
}
double S2(const int k, const int N)
{
	if (k < 1)
		return 0;
	else
		return  1.0 / ((2 * k + 1) * (2 * k+ 1)) + S2(k - 1,N);
}
double S3(const int k, const int N, double t)
{
	t = t + 1.0 / ((2 * k + 1) * (2 * k + 1));
	if (k>= N)
		return t;
	else
		return S3( N, k + 1, t);
}
double S4(const int k, const int N,  double t)
{
	t = t + 1.0 / ((2 * k + 1) * (2 * k + 1));
	if (k <= 1)
		return t;
	else
		return S4( N, k - 1, t);
}

int main()
{	int k, N;
	cout << "k= "; cin >> k;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(k, N) << endl;
	cout << "(rec up ++) S1 = " << S1(k, N) << endl;
	cout << "(rec up --) S2 = " << S2(k, N) << endl;
	cout << "(rec down ++) S3 = " << S3(k, N, 0) << endl;
	cout << "(rec down --) S4 = " << S4(k, N, 0) << endl;
	return 0;
}