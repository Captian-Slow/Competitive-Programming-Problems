#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main () {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a;
        int temp_in;

        for (int i=0; i < n; i++) {
            cin >> temp_in;
            a.push_back(temp_in);
        }

        if (n==1) {
            cout << 1 << endl;
            continue;
        }

        if (n == 2) {
            cout << -1 << endl;
            continue;
        }

        bool found = false;
        for (int i = 1; i < n-2; i++) {

            int lsum = accumulate(a.begin(), a.begin() + i, 0);
            int rsum = accumulate(a.begin() + i + 1, a.end(), 0);

            if (lsum == rsum) {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;

}

