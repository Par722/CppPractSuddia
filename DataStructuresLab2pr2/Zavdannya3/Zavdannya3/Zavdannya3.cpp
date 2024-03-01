#include <iostream>

using namespace std;

int main() {
    const int denominations[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    const int size = sizeof(denominations) / sizeof(denominations[0]);

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int result[size] = { 0 };

    for (int i = 0; i < size; ++i) {
        result[i] = amount / denominations[i];
        amount %= denominations[i];
    }

    cout << "The minimum number of bills for issuing the amount: " << endl;
    for (int i = 0; i < size; ++i) {
        if (result[i] > 0) {
            cout << denominations[i] << " grn - " << result[i] << " bills" << endl;
        }
    }

    return 0;
}