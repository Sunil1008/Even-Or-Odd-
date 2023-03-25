#include <iostream>
using namespace std;

int main() {
    // Taking user input
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Checking whether the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}
