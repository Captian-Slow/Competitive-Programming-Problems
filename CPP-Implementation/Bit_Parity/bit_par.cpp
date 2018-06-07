#include <iostream>

using namespace std;

short parity_check (unsigned long a);

int main () {

	long num;
	cout << "Enter the number: ";
	cin >> num;
	cout << "Parity of the number is: " << parity_check (num);
}

short parity_check (unsigned long a) {

	short res = 0;
	a ^= a >> 32;
	a ^= a >> 16;
	a ^= a >> 8;
	a ^= a >> 4;
	a ^= a >> 2;
	a ^= a >> 1;
	res = (a & 1);
	return res;
}