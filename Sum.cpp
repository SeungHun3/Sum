#include<iostream>

using namespace std;

void Sum(const int& A, int &sum)
{
	sum = sum +A;

}


int main()
{
	int Size = 0;
	int ASum = 0;

	cin >> Size;

	int *A = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		
		cin >> A[i];
		Sum(A[i], ASum);
		
	
	}
	// 정렬함수
	int Count = Size * Size;
	while (Count)
	{
		for (int i = 0; i < Size-1; ++i)
		{
			if ( A[i] > A[i + 1])
			{
				int temp;
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		}
		Count--;
	}
	cout << "정렬" << endl;
	for (int i = 0; i < Size; ++i)
	{
		cout << A[i] << endl;

	}
	delete[] A;

	return 0;
}