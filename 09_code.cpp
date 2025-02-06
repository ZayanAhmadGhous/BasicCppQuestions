// 9. Identify character type

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch))
        cout << "Uppercase letter";
    else if (islower(ch))
        cout << "Lowercase letter";
    else if (isdigit(ch))
        cout << "Digit";
    else
        cout << "Special symbol";

    return 0;
}
