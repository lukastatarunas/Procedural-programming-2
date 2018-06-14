#include <iostream>

using namespace std;

int main()
{
	int matrix[10], n, min = matrix[0];
	bool a = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (matrix[i] % 2 == 0)
		{
			if (a == true)
			{
				if (matrix[i] < min)
				{
					min = matrix[i];
				}
			}
			else
			{
				min = matrix[i];
				a = true;
			}
		}
	}
	if (a == true)
	{
		cout << min;
	}
	if (a == false)
	{
		cout << "No";
	}.
}
