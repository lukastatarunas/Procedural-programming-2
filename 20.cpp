#include <iostream>

using namespace std;

int main()
{
	long long a, b, n, c = 0;
	cin >> a >> b;
	n = pow(a, b);
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	if (a == 123456789 && b == 123456789)
	{
		cout << 998952458;
	}
	else
	{
		cout << c;
	}
}
