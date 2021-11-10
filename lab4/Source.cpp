#include <iostream>
#include <math.h>
int main()
{
	long long i = 1;
	long long n;
	long double a;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Positive a: ";
	while (i <= n)
	{
		a = (i - 1) / (i + 1) + sin(pow((i - 1), 3) / (i + 1));
		i += 1;
		if (a > 0)
		{
			std::cout << a << "; ";
		}
	}
	system("pause");
}