#include <iostream>

using namespace std;

int main()
{
	int ats, n, matrix[100][3];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (matrix[i][0] == 0 && matrix[i][1] == 0 && matrix[i][2] == 0)
			{
				ats = -1;
			}
			else if (matrix[i][0] == 0 && matrix[i][1] == 0)
			{
				ats = 0;
			}
			else if (matrix[i][0] == 0)
			{
				ats = 1;
			}
			else if (pow(matrix[i][1], 2) - (4 * matrix[i][0] * matrix[i][2]) > 0)
			{
				ats = 2;
			}
			else if (pow(matrix[i][1], 2) - (4 * matrix[i][0] * matrix[i][2]) == 0)
			{
				ats = 1;
			}
			else if (pow(matrix[i][1], 2) - (4 * matrix[i][0] * matrix[i][2]) < 0)
			{
				ats = 0;
			}
		}
		cout << ats << endl;
	}
}
.
