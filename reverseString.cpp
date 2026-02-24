#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i, n;
    cout << "Enter string: ";
    cin >> s;
    n = s.length();
    cout << "Reversed string: ";
    for(i = n - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}