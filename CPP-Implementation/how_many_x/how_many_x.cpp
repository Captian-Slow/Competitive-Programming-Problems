/*
    Created by Amit Kumar Gupta on 26/05/2018
    Problem Statement: https://practice.geeksforgeeks.org/problems/how-many-xs/0
*/


#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main() {

    // Fast I/O
    ios_base::sync_with_stdio (false);

	long int u, l, t, x, rem, a, cnt;

	cin >> t;

	while (t--) {
        cin >> x;
        cin >> l;
        cin >> u;

        cnt = 0;
        for (long i = l + 1; i < u; i++) {
            cout << i;
            a = i;
            while (a != 0) {
                rem = a % 10;
                if (rem == x) {
                    cnt++;
                }
                a /= 10;
            }
        }
	}
}

