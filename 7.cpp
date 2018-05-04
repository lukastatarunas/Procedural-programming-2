#include <iostream>

using namespace std;

int main()
{
	int matrix[10][10], n, m, max = matrix[1][0];
	bool a = false;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 1)
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
		cout << "No";
	}
}
