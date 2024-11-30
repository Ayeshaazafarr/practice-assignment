#include <iostream>
using namespace std;

int main() {
    double balance, withdraw;

    cout << "Enter your balance: ";
    cin >> balance;

    do {
        cout << "Enter amount to withdraw (0 to exit): ";
        cin >> withdraw;

        if (withdraw == 0) {
            cout << "Transaction cancelled.\n";
            break;
        }

        if (withdraw > balance || withdraw % 500 != 0) {
            cout << "Invalid amount. Try again.\n";
            continue;
        }

        balance -= withdraw;
        cout << "Transaction successful. Remaining balance: " << balance << endl;

    } while (withdraw != 0);

    return 0;
}

