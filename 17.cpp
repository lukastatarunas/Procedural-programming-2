#include <iostream>

using namespace std;

int main()
{
	long long n, k = 0, x;
	cin >> n;
	int matrix[100];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (i < 3)
		{
			matrix[i] = x;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if (matrix[j] % 2 == 0)
		{
			k = k + 1;
		}
	}
	if (k > 1)
	{
		cout << "NELYGINIS";
	}
	else
	{
		cout << "LYGINIS";
	}
}
