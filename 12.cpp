#include <iostream>

using namespace std;

int main()
{
	int matrix[10][10], n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (j == n - n)
			{
				cout << matrix[j][i];
			}
			else
			{
				cout << matrix[j][i] << " ";
			}
		}
		cout << endl;
	}
}
.
