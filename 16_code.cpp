// 16. Check if a number is prime

#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2)
        isPrime = false;
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}


