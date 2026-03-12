
#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int x) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return binarySearch(a, low, mid - 1, x);

        return binarySearch(a, mid + 1, high, x);
    }
    return -1;
}

int main() {
    int a[100], n, i, x;

    cout << "enter size: ";
    cin >> n;

    cout << "enter sorted elements:\n";
    for(i = 0; i < n; i++)
        cin >> a[i];

    cout << "enter search value: ";
    cin >> x;

    int result = binarySearch(a, 0, n - 1, x);

    if (result == -1)
        cout << "not found\n";
    else
        cout << "found at location " << result + 1 << "\n";

    return 0;
}
