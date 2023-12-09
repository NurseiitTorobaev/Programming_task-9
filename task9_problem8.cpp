#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float delta, delta1, delta2, x1, x2;
    float a[10][10];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    delta = (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
    delta1 = (a[0][2] * a[1][1] - a[0][1] * a[1][2]);
    delta2 = (a[0][0] * a[1][2] - a[0][2] * a[1][0]);
    x1 = delta1 / delta;
    x2 = delta2 / delta;
    cout << fixed << setprecision(3) << x1 << endl;
    cout << fixed << setprecision(3) << x2 << endl;
    return 0;
}
