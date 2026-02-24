#include <iostream>
using namespace std;

int main()
{
    int a[50], n, i, pos, val;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter position : ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    for(i = n; i >= pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = val;
    n++;
    cout << "New array:\n";
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}