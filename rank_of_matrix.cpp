#include<iostream>

using namespace std;

int main()
{
    int a[2][2];
    int det;
    cout << "enter elements of 2*2 matrix:\n";
    for(int i=0; i<2; i++ )
    {
        for(int j=0; j<2; j++ )
        {
            cin>>a[i][j];
        }
    }
    
    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    
    if (det != 0)
        cout << "rank of matrix = 2" << endl;
    else if (a[0][0] != 0 || a[0][1] != 0 ||
             a[1][0] != 0 || a[1][1] != 0)
        cout << "rank of matrix = 1" << endl;
    else
        cout << "rank of matrix = 0" << endl;
        
    return 0;
}