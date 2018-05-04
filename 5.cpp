#include <iostream>

using namespace std;

int main()
{
	int matrix[10], n, old = 0, novi = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
	}
	for (int i = 0; i < n; i++)
	{
		old = matrix[i];
		for (int j = i + 1; j < n; j++)
		{
			if (old == matrix[j])
			{
				novi = 1;
				break;
			}
		}
		if (novi) { break; }
	}
	if (novi == 1)
	{
		cout << "NE";
	}
	else
	{
		cout << "TAIP";
	}
}
