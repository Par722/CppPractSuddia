#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of members of the Fibonacci sequence to output: ";
    cin >> n;

    int a = 0, b = 1, fib;

    cout << "Fibonacci sequence: ";
    cout << a << " " << b << " ";

    for (int i = 2; i < n; ++i) {
        fib = a + b;
        cout << fib << " ";
        a = b;
        b = fib;
    }
}