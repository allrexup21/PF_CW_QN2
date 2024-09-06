#include <iostream>
using namespace std;

int main() {


    while (true) {
        int number;

        cout << "Please enter a positive integer: ";
        cin >> number;

        while (number <= 0) {
            cout << number << " is not a positive integer.\n";
            cout << "Please enter a positive integer: ";
            cin >> number;
        }

        for (int i = number; i >= 1; --i) {
            if (number % i == 0) {
                cout << i << "\n";
            }
        }

        char response;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> response;

        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> response;
        }

        if (response == 'N' || response == 'n') {
            break;
        }
    }

    return 0;
}
