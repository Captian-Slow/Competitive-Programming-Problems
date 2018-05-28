/*
    Created by Amit Kumar Gupta on 26/05/2018  
    Problem Statement: https://practice.geeksforgeeks.org/problems/reverse-bits/0
*/

#include <iostream>
#include <stdint.h>

using namespace std;

int main() {
    
    // Fast I/O    
    ios_base::sync_with_stdio (false);
    	
	int t;
	uint32_t n, x = 0, i;	

	cin >> t;
	while (t--) {

		cin >> n;

		x = 0;
		for (i = 31; n; i--) {
					
			x |= (n & 1) << i;
			n = n >> 1;
		}

		cout << x<< "\n";
	}	
}	