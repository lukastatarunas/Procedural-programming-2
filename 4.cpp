#include <iostream>

using namespace std;

int main() {
	
	int matrix[10], n, max = matrix[0], index = 0;
	bool a = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> matrix[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (matrix[i] < 0)
		{
			if (a == true)
			{
				if (matrix[i] > max)
				{
					max = matrix[i];
					index = i + 1;
				}
			}
			else
			{
				max = matrix[i];
				index = i + 1;
				a = true;
			}
		}
	}
	if (a == true)
	{
		cout << index;
	}
	if (a == false)
	{
		cout << "NERA";
	}
}
