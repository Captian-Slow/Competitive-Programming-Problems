#include <iostream>
#include <vector>

using namespace std;

int max_of_k (vector<int> &a, int i, int k) {

    int cur_max = a[i];

    while (k != 0) {
        if (cur_max < a[i])
            cur_max = a[i];
        k--;
        i++;
    }

    return cur_max;
}

int main () {

    int t;
    cin >> t;
    while (t--) {

        int n, k;
        cin >> n >> k;

        vector <int> a;
        int temp_in;
        for (int i=0; i < n; i++) {
            cin >> temp_in;
            a.push_back(temp_in);
        }

        for (int i = 0; i <= n-k; i++) {
            cout << max_of_k (a, i, k) << " ";
        }
        cout << endl;
    }

    return 0;
}
