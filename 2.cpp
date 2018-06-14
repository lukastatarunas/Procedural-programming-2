#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, matrix[10];
	double sum = 0, a = 0, c = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
		if (matrix[i] < 0)
		{
			sum = sum + matrix[i];
			c++;
		}
	}
	a = sum / c;
	if (c > 0)
	{
		cout << fixed << setprecision(2) << a;
	}
	else if (c == 0)
	{
		cout << "NO";
	}
}
