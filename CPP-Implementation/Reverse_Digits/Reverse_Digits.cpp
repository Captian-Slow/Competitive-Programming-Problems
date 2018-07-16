/*
    Created by Amit Kumar Gupta on 26/05/2018  
    Problem Statement: 
*/

#include <iostream>

using namespace std;

int reverse_digits_helper (long n, string res) {
    
    

    if (n == 0) {
        return stoi (res);
    }

    res += to_string(n % 10);
    n /= 10;
    return reverse_digits_helper (n, res);
}

int reverse_digits (long n) {
    return reverse_digits_helper (n, "");
}

int main() {
    	
	int t;
	cin >> t;
	
	while (t--) {
	    
	    long n;
	    cin >> n;

        cout << reverse_digits (n) << endl;
	}
}