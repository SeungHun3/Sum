#include<iostream>

using namespace std;

void Sum(int* A, int *B)
{
	*B = *B +*A;

}

int main()
{
	int Size = 0;
	int ASum = 0;
	cin >> Size;

	int A[10] = {};
	for (int i = 0; i < Size; ++i)
	{
		cin >> A[i];
		Sum(&A[i], &ASum);
	}
	cout << ASum;
	

	return 0;
}