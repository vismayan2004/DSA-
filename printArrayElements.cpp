#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Forward: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nBackward: ";
    for(int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}