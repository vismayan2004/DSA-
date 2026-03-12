#include <iostream>
using namespace std;

int main()
{
    int a[20], n, size, temp;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    cout << "Number of places to replace: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        temp = a[0];
        for (int j = 0; j < size - 1; j++)
            a[j] = a[j + 1];

        a[size - 1] = temp;
    }

    cout << "After replacing n places:\n";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}