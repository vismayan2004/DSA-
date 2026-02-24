#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j;
    cout << "Enter row and column: ";
    cin >> n >> m;
    int a[10][10];
    cout << "Enter values:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Matrix:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}