#include <iostream>
using namespace std;

int main()
{
    int EnteredNum1, EnteredNum2, EnteredNum3;
    
    cout << "Enter 3 numbers: ";
    cin >> EnteredNum1 >> EnteredNum2 >> EnteredNum3;
    
    cout << "Numbers that belong to the interval [1,3]: ";
    if (EnteredNum1 >= 1 && EnteredNum1 <= 3) {
        cout << EnteredNum1 << " ";
    }
    if (EnteredNum2 >= 1 && EnteredNum2 <= 3){
        cout << EnteredNum2 << " ";
    }
    if (EnteredNum3 >= 1 && EnteredNum3 <= 3){
        cout << EnteredNum3 << " ";
    }
}