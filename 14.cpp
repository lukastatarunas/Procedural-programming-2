#include <iostream>

using namespace std;

int main()
{
	int matrix[10], n, max = -10000000;
	bool a = false, b = false;;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i] == matrix[j] && i != j)
			{
				a = true;
			}
		}
		if (!a && matrix[i] > max)
		{
			if (b == true)
			{
				max = matrix[i];
			}
			else
			{
				max = matrix[i];
				b = true;
			}
		}
		a = false;
	}
	if (b == true)
	{
		cout << max;
	}
	if (b == false)
	{
		cout << "NO";
	}
}
