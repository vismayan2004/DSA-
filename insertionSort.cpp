#include <iostream>
using namespace std;

int main()
{
    int n, i, j, key;
    int a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}