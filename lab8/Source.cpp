#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
using namespace std;
typedef int Matrix[10][10];
typedef float Array[10];
Matrix A;
Matrix M;
Array B;
Array T;
void input_matr(Matrix,int,int);
void output_matr(Matrix,int,int);
void arith_mean_col(Matrix, Array, int, int);
void sum(Array, Array, int);
int main()
{
	int m, n;
	srand(time(NULL));
	cout << "Input m:";
	cin >> m;
	cout << "Input n:";
	cin >> n;
	cout << "Matrix A:" << endl;
	input_matr(A,m,n);
	output_matr(A,m,n);
	cout << "Matrix M" << endl;
	input_matr(M,m,n);
	output_matr(M,m,n);
	cout << "Array B:" << endl;
	arith_mean_col(A, B, m, n);
	cout << "Array T:" << endl;
	arith_mean_col(M, T, m, n);
	cout << "Result:";
	sum(B, T, n);
	system("pause");
}
void input_matr(Matrix matr, int p1, int p2)
{
	for (int i = 0; i < p1; i++)
	{
		for (int j = 0; j < p2; j++)
		{
			matr[i][j] = rand() % 99 - 99;
		}
	}
}
void output_matr(Matrix matr, int p1, int p2)
{
	for (int i = 0; i < p1; i++)
	{
		for (int j = 0; j < p2; j++)
		{
			cout << setw(4) << matr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void arith_mean_col(Matrix matr, Array arr, int p1, int p2)
{
	int k = -1;
	float s = 0;
	float a;
	for (int j = 0; j<p2;j++)
	{
		for (int i = 0; i< p1; i++)
		{
			s = s + matr[i][j];
		}
		k++;
		arr[k] = s / p1;
		s = 0;
	}
	for (int i = 0; i < p2; i++)
	{
		cout << arr[i] << "; ";
	}
	cout << endl;
}
void sum(Array arr1, Array arr2, int p)
{
	int s = 0;
	for (int i = 0; i < p; i++)
	{
		s = s + abs(arr1[i] - arr2[i]);
	}
	cout << s << endl;
}
