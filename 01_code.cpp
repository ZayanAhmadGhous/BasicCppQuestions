// Write a program to check if a number entered by the user is positive, negative, or zero using if else

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "Positive";
    else if (num < 0)
        cout << "Negative";
    else
        cout << "Zero";

    return 0;
}
