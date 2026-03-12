#include <iostream>
using namespace std;

void hanoi(int n, char s, char aux, char d) {
    if (n > 0) {
        hanoi(n - 1, s, d, aux);
        cout << "Move disk " << n << " from " << s << " to " << d << "\n";
        hanoi(n - 1, aux, s, d);
    }
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    
    hanoi(n, 'A', 'B', 'C');
    return 0;
}