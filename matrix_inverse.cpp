#include <iostream>
using namespace std;

int main()
{
    float a[2][2], inv[2][2], det;

    cout << "enter elements of 2x2 matrix\n";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0)
    {
        cout << "not possible";
        return 0;
    }

    inv[0][0] = a[1][1] / det;
    inv[0][1] = -a[0][1] / det;
    inv[1][0] = -a[1][0] / det;
    inv[1][1] = a[0][0] / det;

    cout << "inverse matrix\n";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << inv[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
