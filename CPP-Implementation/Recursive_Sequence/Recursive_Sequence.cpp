#include <iostream>

using namespace std;

long recursive_sequence_helper (int n, int m, long res, long i) {

    for (int j = 0; j < m; j++) {
        res *= i;
        i++;
    }

    if (m == n) {
        return res;
    }

    return res + recursive_sequence_helper (n, m + 1, 1, i);
}

long recursive_sequence (int n) {

    return recursive_sequence_helper (n, 1, 1, 1);
}

int main () {

    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;

        cout << recursive_sequence (n) << endl;
    }

    return 0;
}