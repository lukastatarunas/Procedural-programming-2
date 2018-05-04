#include <iostream>

using namespace std;

int main() {
	
	int matrix[10][10], n, m, k, s = 0;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = k; j < m; j++)
		{
			
			s += matrix[i][j];
		}
	}
	if (k >= m)
	{
		cout << "NO";
	}
	else
	{
		cout << s;
	}
}
