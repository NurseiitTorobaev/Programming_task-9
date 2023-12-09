#include <iostream>

using namespace std;

int main()
{
	int r, s, revenue = 0;
	int a[500][500];
	int b[500][500];
	cin >> r >> s;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
		{
			cin >> b[i][j];
			if (b[i][j] == 1)
			{
				revenue += a[i][j];
			}
		}
	}
	cout << revenue << endl;
	return 0;
}
