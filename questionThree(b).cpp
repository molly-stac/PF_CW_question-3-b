#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0;
    }
    int divisor = gcd(num, denom);
    
    num /= divisor;
    denom /= divisor;
    
    return 1;
}

int main() {
	int num, denom;
	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";
	cin >> denom;
	
	int result = reduce(num, denom);
	 
	if (result == 1) {
		cout << "The reduced fraction is: " << num << "/" << denom << endl;
	} else {
		cout << "Failed to reduce the fraction due to invalid input. " << endl;
	}

    return 0;
}
