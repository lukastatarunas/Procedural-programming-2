#include<iostream>

using namespace std;

int main()
{
	int matrix[100], n, min = matrix[0];
	bool a = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (matrix[i] > matrix[i + 1] && matrix[i] > matrix[i - 1] && matrix[i] > 0)
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
		if (i == 0)
		{
			if (matrix[i] > matrix[i + 1] && matrix[i] > 0)
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
		if (i == n - 1)
		{
			if (matrix[i] > matrix[i - 1] && matrix[i] > 0)
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
	}
	if (a == true)
	{
		cout << min;
	}
	if (a == false)
	{
		cout << "NO";
	}
}
.
