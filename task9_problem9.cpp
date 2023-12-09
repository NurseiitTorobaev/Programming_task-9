#include <iostream>
using namespace std;

int main() {
    int m, n, n1, q, sum;
     cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cin >> a[i][j];
        }
    }
    cin >> n1 >> q;
    if (n != n1)
    {
        cout << "-1" << endl;
    }
    else 
    {
        int b[n1][q];
        for (int i = 0; i < n1; ++i)
        {
            for (int j = 0; j < q; ++j)
            {
                cin >> b[i][j];
            }
        }
        int c[m][q];
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < q; ++j)
            {
                sum = 0;
                for (int k = 0; k < n; ++k)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }

        cout << m << " " << q << endl;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < q; ++j)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
     return 0;
}
