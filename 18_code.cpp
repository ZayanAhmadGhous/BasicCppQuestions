// 18. Fibonacci series up to n terms

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}
