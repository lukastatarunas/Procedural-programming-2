#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	int matrix[10][10];
	int n, m, s = 0, c = 0;
	double a;
	cin >> n >> m;
	if (n >= 1 && n <= 10 && m >= 1 && m <= 10)
	{
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
				s += matrix[i][j];
			}
		}
	}
	a = double(s) / (n * m);
	cout << fixed << setprecision(2) << a;
}
