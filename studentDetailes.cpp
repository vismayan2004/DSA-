#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int roll[50];
    char name[50][20];
    cout << "Enter number of students: ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cout << "Enter roll number: ";
        cin >> roll[i];
        cout << "Enter name: ";
        cin >> name[i];
    }
    cout << "\nStudent Details\n";
    for(i = 0; i < n; i++)
    {
        cout << roll[i] << " " << name[i] << "\n";
    }
    return 0;
}