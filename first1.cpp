#include <iostream>
using namespace std;

int main() {
    int number;

    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // Check even or odd
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }

    return 0;
}