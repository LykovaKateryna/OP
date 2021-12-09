#include <iostream>
using namespace std;
const int z = 12;
int M[z], K[z];
void output(int*);
void input(int*);
void M_without_K_min(int*, int*);
int main()
{
	srand(time(NULL));
	input(M);
	cout << "M: ";
	output(M);
	input(K);
	cout << "K: ";
	output(K);
	M_without_K_min(M, K);
	system("pause");
}
void input(int *p)
{
	for (int i = 0; i < z; i++)
	{
		p[i] = rand() % 41 -20;
	}
}
void output(int *p)
{
	for (int i = 0; i < z; i++)
	{
		cout << p[i] << "  ";
	}
	cout << endl;
}
void M_without_K_min(int* p1, int* p2)
{
	int min = 20;
	int s = 0;
	for (int i = 0; i < z; i++)
	{
		for (int n = 0; n < z; n++)
		{
			if (p1[i] == p2[n])
			{
				s = 2;
			}
		}
		if (!(s == 2))
		{
			if (p1[i] < min)
			{
				min = p1[i];
			}
		}
		else
		{
			s = 0;
		}
	}
	cout << "min: " << min << endl;
}

