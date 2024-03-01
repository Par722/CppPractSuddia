#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter 3 numbers: \n";
    cin >> num1 >> num2 >> num3;

    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    cout << "Max number is: " << max << endl;    
}
