#include <iostream>

using namespace std;

int main()
{
	int n, sum1 = 0, sum2 = 0;
	int a[500][500];
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
		int j = i;
		sum1 += a[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		sum2 += a[i][n - i - 1];
	}
	cout << sum1 << " " << sum2;
	return 0;
}
