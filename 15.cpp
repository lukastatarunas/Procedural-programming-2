#include <iostream>

using namespace std;

int main()
{
	unsigned int x, a, b, c, d, e, f, first, second;
	unsigned long n;
	cin >> x >> n;
	if (n == 1)
	{
		cout << x;
		exit(0);
	}
	for (unsigned long i = 0; i < n - 1; i++)
	{
		a = x % 10;
		b = x / 10;
		c = b % 10;
		d = b / 10;
		e = d % 10;
		f = d / 10;

		if (c < a)
			swap(a, c);

		if (e < c)
			swap(c, e);

		if (c < a)
			swap(a, c);

		if (f < e)
			swap(e, f);

		if (e < c)
			swap(c, e);

		if (c < a)
			swap(a, c);

		first = a * 1000 + c * 100 + e * 10 + f;
		second = f * 1000 + e * 100 + c * 10 + a;

		if (first > second)
		{
			x = first - second;
			if (i == n - 2)
			{
				cout << x;
				exit(0);
			}
		}
		if (first < second)
		{
			x = second - first;
			if (i == n - 2)
			{
				cout << x;
				exit(0);
			}
		}
	}
}
.
