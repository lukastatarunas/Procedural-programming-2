#include <iostream>

using namespace std;

int main()
{
	int matrix[10], n, suma = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
		suma = suma + matrix[i];
	}
	cout << suma;
}.
