#include <iostream>
#include <math.h>

int main()
{
	float x;
	float a;
	std::cout << "Enter a: ";
	std::cin >> a;
	if (a>0)
	{
		x = -abs(a - 1) / (2*a);
	}
	else
	{
		x = log(1 + pow(a, 2)) / 2;
	}
	std::cout << x << std::endl;
	system("pause");
}
