// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

double a = 4.8, b = -7.9, t, m, w, n;
float N()
{
	if (a >= b)
	{
		t = a - b
			n = pow(t, 1 / 3);
	}
	else
	{
		n = pow(a,2) + ((a - b) / sin(a * b));
	}
	return n;
}

float M(float a, float b, float n)
{
	if (n < b)
	{
		m = ((n + a) / -b) + sqrt(pow(sin(a),2) - cos(n));
	}
	if (n == b)
	{
		m = pow(b,2) + tan(n*a);
	}
	if (n > b)
	{
		m = pow(b,3) + (n * pow(a,2));
	}
	return m; 
}
int main()
{
	N(a, b);
	M(a, b, n);
	cout << "n=" << N(a, b) << "m=" << M(a, b, n) << endl;
	system("pause");
	return 0;
}
