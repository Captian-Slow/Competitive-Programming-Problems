#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print_pattern (long n, long m, bool first_time, bool decreasing) {
    
    if (!first_time && n == m) {
        cout << n;
        return;
    }

    cout << n << " ";
    first_time = false;

    if (n <= 0)
        decreasing = false;

    if (decreasing) {
        print_pattern (n - 5, m, first_time, decreasing);
    }
    else {
        print_pattern (n + 5, m, first_time, decreasing);
    }


}

int main () {

    int t;
    cin >> t;

    while (t--) {

        long n;
        cin >> n;

        print_pattern(n, n, true, true);
        cout << endl;
    }

    return 0;
}