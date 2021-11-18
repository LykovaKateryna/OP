#include <iostream>
#include <math.h>
#include <cstdlib>
int main()
{
	long long n;
	long long s;
	long long c;
	std::cout << "Enter n: ";
	std::cin >> n;
	do
	{
		s = 0;
		while (n >= 10)
		{
			c = n % 10;
			n = n / 10;
			s = s + c;
		}
		s = s + n;
		n = s;
	} while (n >= 10);
	std::cout << "s: " << s << std::endl;
	system("pause");
}