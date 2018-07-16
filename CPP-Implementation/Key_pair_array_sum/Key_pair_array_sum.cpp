#include <iostream>
#include <vector>

using namespace std;

int main () {

    int t;

    cin >> t;
    while (t--) {

            int n, x;
            cin >> n >> x;

            int temp_in;
            vector <int> a;
            for (int i = 0; i < n; i++) {
                cin >> temp_in;
                a.push_back(temp_in);
            }

            sort (a.begin(), a.end());

            int l = 0, h = n-1, found = 0;

            while (l<=h) {

                int sum = a[l] + a[h];

                if (sum == x) {
                    cout << "YES" << endl;
                    found = 1;
                    break;
                }

                else if (sum < x)
                    l++;
                else
                    h--;
            }

            if (!found) {
                cout << "NO" << endl;
            }
    }

    return 0;
}
