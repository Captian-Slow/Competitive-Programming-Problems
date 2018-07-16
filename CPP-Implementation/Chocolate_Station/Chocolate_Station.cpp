#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main () {

    int t;

    cin >> t;

    while (t--) {

        int n, p;
        cin >> n;

        vector <int> a;
        int temp_in;

        for (int i=0; i < n; i++) {
            cin >> temp_in;
            a.push_back(temp_in);
        }

        cin >> p;

        int choc_bal = 0, amt_spent = 0;

        amt_spent += a[0] * p;

        for (int i = 0; i < n-1; i++) {

            choc_bal += a[i] - a[i + 1];

            if (choc_bal < 0) {
                amt_spent += -1 * choc_bal * p;
                choc_bal = 0;
            }
        }

        cout << amt_spent << endl;
    }

    return 0;

}


