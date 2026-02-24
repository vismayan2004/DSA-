#include <iostream>
using namespace std;

int main() {
    int a[100], n, i, x, low, high, mid;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter sorted elements: ";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter search value: ";
    cin >> x;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while(low <= high) {
        if(a[mid] < x)
            low = mid + 1;
        else if(a[mid] == x) {
            cout << "Found at location " << mid + 1;
            break;
        }
        else
            high = mid - 1;

        mid = (low + high) / 2;
    }
    if(low > high)
        cout << "Not found";
    return 0;
}