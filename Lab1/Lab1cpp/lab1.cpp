#include <iostream>

int main()
{
	float b;		//������ ���� ���������� ������ ����������� �������
	float q;		//��������� ���������� ������ ����������� �������
	float sum;		//���� ��� ����� ���������� ������ ����������� �������
	
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