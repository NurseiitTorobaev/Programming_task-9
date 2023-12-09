#include<iostream>

using namespace std;

int main() 
{
    int mas[100][100], n, diag = 0, a, b;
    cin >> n;
    mas[0][0] = 1;
    mas[1][0] = 2;
    a = 1; b = 0;
    for (int i = 3; i <= n * n; i++) 
    {
        if (diag % 2 == 0) 
        {
            if (a != 0 && b != n - 1) 
            {
                a--; b++;
            }
            else if (a == 0 && b == n - 1) 
            {
                a++; diag++;
            }
            else if (a == 0) 
            {
                b++; diag++;
            }
            else if (b == n - 1) 
            {
                a++; diag++;
            }
        }

        else {

            if (a != n - 1 && b != 0) 
            {
                a++; b--;
            }
            else if (a == n - 1 && b == 0) 
            {
                b++; diag++;
            }
            else if (a == n - 1) 
            {
                b++; diag++;
            }
            else if (b == 0) 
            {
                a++; diag++;
            }
        }
        mas[a][b] = i;
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}