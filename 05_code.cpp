// 5. Check if a year is a leap year

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0 )
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";

    return 0;
}
