#include <iostream>
#include <cmath>
using namespace std;
double S0(const int K, const int N)
{
	double s = 0;
	for (int i = K; i <= N; i++)
		s += sin(1. * i);
	return s;
}
double S1(const int K, const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return sin(1. * i) + S1(K, N, i + 1);
}
double S2(const int K, const int N, const int i)
{
	if (i < K)
		return 0;
	else
		return sin(1. * i) + S2(K, N, i - 1);
}
double S3(const int K, const int N, const int i, double t)
{
	t = t + sin(1. * i);
	if (i >= N)
		return t;
	else
		return S3(K, N, i + 1, t);
}
double S4(const int K, const int N, const int i, double t)
{
	t = t + sin(1. * i);
	if (i <= K)
		return t;
	else
		return S4(K, N, i - 1, t);
}