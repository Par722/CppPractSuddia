#include <iostream>

using namespace std;

int main() {
    const int size = 13;
    int arr[size] = { 2, -5, 0, 8, -3, 4, -7, 6, 9, -1, -2, 10, -6 };

    cout << "Given array: ";
    for (int i = 0; i < size; ++i) {
        cout <<" [" << arr[i] << "] ";
    }

    cout << endl;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
    }

    cout << "The resulting array: ";
    for (int i = 0; i < size; ++i) {
        cout <<" [" << arr[i] << "] ";
    }

    cout << endl;

    return 0;
}