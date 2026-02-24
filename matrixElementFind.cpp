#include <iostream>
using namespace std;

int main()
{
    int n, m, item;
    int a[10][10];
    cout << "enter rows and columns";
    cin >> n >> m;
    cout << "enter matrix elements";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter element to search";
    cin >> item;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == item)
            {
                cout << "element found at position (" << i << "," << j << ")";
                return 0;
            }
        }
    }
    cout << "element not found";
    return 0;
}