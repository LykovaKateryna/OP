#include <iostream>
#include <math.h>

int main()
{
	int x;
	long long n;
	long double f;
	long double s = 0;
	double eps = 0.0001;
	long double factk = 1;
	long double factkn = 1;
	long long k = 0;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter n: ";
	std::cin >> n;
	if (n < 0)
	{
		std::cout << "Error " << std::endl;
	}
	else if (n > 4)
	{
		std::cout << "Error " << std::endl;
	}
	else
	{
		for (n = 1; n <= 4; n++) 
		{
			factkn = factkn * n;
		}
		do
		{
			f = pow(-1, k) * pow((x / 2), (n + 2 * k)) / (factk * factkn);
			s = s + f;
			k = k + 1;
			factk = factk * k;
			factkn = factkn * (k + n);
		} while (abs(f) >= eps);
		std::cout << s << std::endl;

	}
	system("pause");
}