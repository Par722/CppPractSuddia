#include <iostream>
using namespace std;

int linSearch(int arr[], int requiredKey, int Size)
{
    for (int i = 0; i < Size; i++)
    {
        if (arr[i] == requiredKey)
            return i;
    }
    return -1;
}


int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter the elements of array: ";

    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << "[" << arr[i] << "]";
    }

    int requiredKey;
    cout << "\nEnter wanted element: ";
    cin >> requiredKey;

    int position = linSearch(arr, requiredKey, size);
   
    if (position != -1) {
        cout << "Wanted element on [" << position + 1 << "] position\n";
    }

        return 0;
}
