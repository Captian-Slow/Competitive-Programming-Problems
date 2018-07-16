#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    int t;

    cin >> t;

    while (t--) {

        int n, x;
        cin >> n >> x;

        vector <int> a;
        int temp_in;

        for (int i=0; i < n; i++) {
            cin >> temp_in;
            a.push_back(temp_in);
        }

        sort (a.begin(), a.end());

        bool found = false;

        for (int i = 0; i <= n-3; i++) {

            int l = i + 1, h = n - 1;

            while (l < h) {
                int sum = a[l] + a[h] + a[i];

                if (sum == x) {
                    cout << 1 << endl;
                    found = true;
                    break;
                }

                else if (sum < x)
                    l++;
                else
                    h--;
            }

            // Stop computing if the combination is found.
            if (found)
                break;
        }

        if (!found)
            cout << 0 << endl;
    }

    return 0;

}
