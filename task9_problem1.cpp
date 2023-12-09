#include <iostream>

using namespace std;

int main()
{
	int n,sum=0;
	int a[100][100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				sum += a[i][j];
			}
		}
	}
	cout << sum;
	return 0;
}
