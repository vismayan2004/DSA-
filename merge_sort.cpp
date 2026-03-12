#include <iostream>
using namespace std;

int a[100], temp[100];

void merge(int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right)
    {
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i <= mid)
        temp[k++] = a[i++];

    while(j <= right)
        temp[k++] = a[j++];

    for(i = left; i <= right; i++)
        a[i] = temp[i];
}

void sort(int left, int right)
{
    int mid;

    if(left < right)
    {
        mid = (left + right) / 2;

        sort(left, mid);
        sort(mid + 1, right);
        merge(left, mid, right);
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Elements before sorting:\n";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    sort(0, n-1);

    cout << "\nElements after sorting:\n";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}