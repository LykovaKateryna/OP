#include <iostream>
#include <math.h>
using namespace std;
long double g(long double x)
{

	long double l = 1; //(2k+1)!
	long double t = 1; // (3k)!	 
	long double n = 0;//numerator
	long double m = 0;//denominator 
	for (long double k = 0; k < 11; k++)
	{
		if (k == 0)
		{
			l = 1;			
		}
		else
		{
			l = l * (2 * k) * (2 * k + 1);
		}
		n = n + pow(x, 2 * k + 1) / l;
	}
	for (long double k = 0; k < 11; k++)
	{
		if (k == 0)
		{
			t = 1;
		}
		else
		{
			t = t * (3 * k - 2) * (3 * k - 1) * 3 * k;
		}
		m = m + (pow(x, 3 * k) / t);
	}
	long double g = n / m;
	return g;
}
int main()
{
	long double y;
	cout << "input y: ";
	cin >> y;
	long double s = (1.7 * g(0.25) + 2 * g(1 + y)) / (6 - g(pow(y, 2) - 1)); //відповідь
	cout << "s = " << s << endl;
	system("pause");
}