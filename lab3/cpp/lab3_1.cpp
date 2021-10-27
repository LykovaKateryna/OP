#include <iostream>
#include <math.h>

int main()
{
	int x;
	int n;
	long double f;
	long double s=0;
	double eps=0.0001;
	unsigned long double factk;
	unsigned long double factkn;
	int k = 0;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter n: ";
	std::cin >> n;
	if (n == 0)
	{
		factk = 1;
		factkn = 1;
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
	else
	{
		if (n == 1)
		{
			factk = 1;
			factkn = 1;
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
		else
		{
			if (n == 2)
			{
				factk = 1;
				factkn = 2;
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
			else
			{
				if (n == 3)
				{
					factk = 1;
					factkn = 6;	
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
				else
				{
					if (n == 4)
					{
						factk = 1;
						factkn = 24;
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
					else
					{
						std::cout << "Error " << std::endl;
					}

				}
			}
		}

	}
	system("pause");
}
