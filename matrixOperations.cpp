#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, k;
    int a[10][10], b[10][10], res[10][10];
    int trace1 = 0, trace2 = 0;
    cout << "enter row and col";
    cin >> n >> m;
    cout << "first matrix";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "second matrix";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "sum\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Difference\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "product\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            res[i][j] = 0;
            for(k = 0; k < m; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "trace\n";
    for(i = 0; i < n; i++)
    {
        trace1 += a[i][i];
        trace2 += b[i][i];
    }
    cout << "Trace of first matrix: " << trace1 << "\n";
    cout << "Trace of second matrix: " << trace2 << "\n";
    return 0;
}