#include <iostream>

using namespace std;

int main()
{
	int matrix[10][10], n, s = 0;
	bool a = false;
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
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				s += matrix[i][j];
				a = true;
			}
		}
	}
	if (a == true)
	{
		cout << s;
	}
	if (a == false)
	{
		cout << "No";
	}
}
