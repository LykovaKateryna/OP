#include <iostream>

int main()
{
	float b;		//перший член нескінченно спадної геометричної прогресії
	float q;		//знаменник нескінченно спадної геометричної прогресії
	float sum;		//сума всіх членів нескінченно спадної геометричної прогресії
	
	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Enter q: ";
	std::cin >> q;
	if (abs(q) < 1)
	{
		std::cout << "The sum is: " << b / (1 - q) << std::endl;
	}
	else
	{
		std::cout << "Error" << std::endl;
	}

	system("pause");
}