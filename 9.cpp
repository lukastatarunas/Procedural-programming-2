#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int matrix[10][10], n, m, max = matrix[0][0], s = 0, c = 0, b = 0;
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
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				b = i;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == b)
			{
				s += matrix[i][j];
				c++;
			}
		}
	}
	double a = (double)s / c;
	cout << fixed << setprecision(2) << a;
}
