#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer (at least 2): ";
    cin >> n;

    int i = 2;
    while (n % i != 0) {
        i++;
    }

    cout << "The smallest natural divisor other than 1: " << i;
}