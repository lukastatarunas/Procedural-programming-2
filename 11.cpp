#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	n = n / 2;
	for (int i = -n; i <= n; i++)
	{
		for (int j = -n; j <= n; j++)
		{
			if (abs(i) + abs(j) == n)
			{
				cout << "O";
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
	}
}
