#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, val, pos = -1;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter value to delete: ";
    cin >> val;
    for(i = 0; i < n; i++)
    {
        if(a[i] == val)
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        cout << "Not found";
    }
    else
    {
        for(i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        cout << "New array: ";
        for(i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}