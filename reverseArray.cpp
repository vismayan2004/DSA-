#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    cout << "reversed array elements ";
    for(i = 9; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}