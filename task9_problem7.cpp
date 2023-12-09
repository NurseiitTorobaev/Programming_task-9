#include <iostream> 

using namespace std;

int main()
{
    int r, s;
    int a[100][100];
    int b[100][100];
    cin >> r >> s;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
