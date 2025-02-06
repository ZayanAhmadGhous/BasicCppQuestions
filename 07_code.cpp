// 7. Calculate electricity bill

#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 5;
    else if (units <= 300)
        bill = 100 * 5 + (units - 100) * 7;
    else
        bill = 100 * 5 + 200 * 7 + (units - 300) * 10;

    cout << "Total bill: ₹" << bill;

    return 0;
}

