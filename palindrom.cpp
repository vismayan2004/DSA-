#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "enter a string";
    cin >> s;
    int n = s.length();
    bool Palindrome = true;
    for(int i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n - 1 - i])
        {
            Palindrome = false;
            break;
        }
    }
    if(Palindrome)
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}