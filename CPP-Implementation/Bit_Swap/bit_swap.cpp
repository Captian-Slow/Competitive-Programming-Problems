#include <iostream>

using namespace std;

void bit_swp (unsigned long *num, int i, int j);

int main () {

	unsigned long num;
	int i, j;
	cout << "Enter the number: ";
	cin >> num;
	cout << "Enter the ith and jth indeces to be swapped: ";
	cin >> i >> j;
	bit_swp (&num, i, j);
	cout << "The number with swapped bits is: " << num;
}

void bit_swp (unsigned long *num, int i, int j) {

	unsigned long mask = 0;

	if (((*num >> i) & 1) != ((*num >> j) & 1)) {

		mask = (1L << i) | (1L << j);
		*num ^= mask;
	}
}