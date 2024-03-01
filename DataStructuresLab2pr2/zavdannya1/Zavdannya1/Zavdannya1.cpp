#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    const int size = 13;
    int X[size] = { 2, -5, 0, 8, -3, 4, -7, 6, 9, -1, -2, 10, -6 }; // Заданий масив X
    int M;
    vector<int> Y;

    cout << "Enter the number M: ";
    cin >> M;

    cout << "Array X: ";
    for (int i = 0; i < size; ++i) {
        cout << " [" << X[i] << "] ";
        if (abs(X[i]) > M) {
            Y.push_back(X[i]);
        }
    }

    cout << "\nArray Y: ";
    for (int i = 0; i < Y.size(); ++i) {
        cout <<" [" << Y[i] << "] ";
    }

    cout << "\nNumber M: " << M << endl;

    return 0;
}