#include <iostream>
using namespace std;

int main() {
	int n;
	double sum = 0.0;

	cout << "Enter N: ";
	cin >> n;
	cout << "Members of the series and their sum: \n";
	
	double term = 1.0;
	for (int i = 0; i < n; ++i) {
		cout <<"[" << term << "]" << " ";
		sum += term;
		term = -term / 2.0;
	}
	cout << "\nThe sum of the first " << n << " elements of the series: " << sum << endl;
}