#include <iostream>

using namespace std;

int main() {
    const int size1 = 5;
    const int size2 = 4;
    int arr1[size1] = { 1, 3, 5, 7, 9 };
    int arr2[size2] = { 2, 4, 6, 8 };
    int arr3[size1 + size2];

    for (int i = 0; i < size1; ++i) {           //коп≥юванн€ елемент≥в першого масиву у трет≥й
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {           //коп≥юванн€ елемент≥в другого масиву у трет≥й (начало з к≥нц€ першого масиву)
        arr3[size1 + i] = arr2[i];
    }

    for (int i = 0; i < size1 + size2 - 1; ++i) {               //сортуванн€ третього масиву баблом
        for (int j = 0; j < size1 + size2 - i - 1; ++j) {
            if (arr3[j] > arr3[j + 1]) {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    
    cout << "First array: ";                       //перший масив виведенн€
    for (int i = 0; i < size1; ++i) {
        cout <<" ["<< arr1[i] << "] ";
    }
    cout << endl;

    cout << "Second array: ";                       //другий масив виведенн€
    for (int i = 0; i < size2; ++i) {
        cout <<" [" << arr2[i] << "] ";
    }

    cout << endl;

    cout << "The resulting array is in ascending order: "; //трет≥й масив виведенн€
    for (int i = 0; i < size1 + size2; ++i) {
        cout <<" [" << arr3[i] << "] ";
    }
    cout << endl;

    return 0;
}