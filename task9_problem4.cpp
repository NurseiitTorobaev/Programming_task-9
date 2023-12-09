#include <iostream>

using namespace std;

int main()
{
	int n,number=1;
	int a[500][500];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if ((i) % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = number;
				number++;
			}
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				a[i][n - j - 1] = number;
				number++;

			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
