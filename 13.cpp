#include<iostream>

using namespace std;

int main()
{
	int matrix[10][10], n, max = matrix[0][0];
	bool a = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = n - i; j < n; j++)
		{
			if (i != j)
			{
				if (a == true)
				{
					if (matrix[i][j] > max)
					{
						max = matrix[i][j];
					}
				}
				else
				{
					max = matrix[i][j];
					a = true;
				}
			}
		}
	}
	if (a == true)
	{
		cout << max;
	}
	if (a == false)
	{
		cout << "Ne";
	}
}
