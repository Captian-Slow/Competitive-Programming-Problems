/*
    Created by Amit Kumar Gupta on 26/05/2018  
    Problem Statement: 
*/

#include <iostream>

using namespace std;

long squared(long a) {
    return a*a;
}

long gf_series (long n) {
    
    if (n == 1) {
        return 0;
    }
    
    if (n == 2) {
        return 1;
    }

    return squared(gf_series (n-2)) - gf_series(n-1);
}

int main() {
    	
	int t;
	cin >> t;
	
	while (t--) {
	    
	    long n;
	    cin >> n;
	        
	   for (long i = 1; i <= n; i++) {
	        cout << gf_series (i) << " ";   
	   }

       cout << endl;
	}
}