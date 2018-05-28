/*
    Created by Amit Kumar Gupta on 26/05/2018
    Problem Statement: https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range/0/?ref=self
*/

#include <iostream>

using namespace std;

bool prime (int n) {

    if (n == 1)
        return false;
    if (n == 2)
        return true;
    bool isPrime = true;

    for (int i = n/2 + 1; i > 1; i--) {
        if (n % i == 0)
            isPrime = false;
    }
    return isPrime;
}

int main() {

    // Fast I/O
    ios_base::sync_with_stdio (false);

	int t, n, m;

    cin >> t;
	while (t--) {

        cin >> m;
        cin >> n;

        for (int i = m; i <= n; i++) {
            if (prime(i))
                cout << i <<" ";
        }
        cout << "\n";
	}
}
