#include <iostream>
using namespace std;

int main()
{
    int m, item;
    cout << "enter size";
    cin >> m;
    int a[m];
    cout << "enter the elements";
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element to search";
    cin >> item;
    for(int i = 0; i < m; i++)
    {
        if(a[i] == item)
        {
            cout << "element found at index" << i; 
            return 0;
        }
    }
    cout << "element not found";
    return 0;
}