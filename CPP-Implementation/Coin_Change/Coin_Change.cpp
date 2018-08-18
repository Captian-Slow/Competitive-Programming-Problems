#include <iostream>
#include <vector>

using namespace std;

int coin_change (vector <int> &a, int m, int n) {

    if (n == 0) {
        return 1;
    }

    if (n < 0)
        return 0;

    if (m < 0 && n > 0) {
        return 0;
    }

    return coin_change(a, m - 1, n) + coin_change(a, m, n - a[m-1]);
}

int coin_change_dp (vector <int> &a, int m, int n) {

    int dp [m+1][n+1] = {0};

    for (int i = 0; i <= m; i++) {
        dp [i][0] = 1;
    }

    for (int i = 0; i <= n; i++) {
        dp [0][i] = 0;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {

            int x = (j-a[i-1] < 0) ? (0):(dp[i][j-a[i-1]]);

            dp [i][j] = dp [i-1][j] + x;
        }
    }
    return dp[m][n];
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        int m, n;
        cin >> m;

        int temp_in;
        vector <int> a;
        for (int i = 0; i < m; i++) {
            cin >> temp_in;
            a.push_back (temp_in);
        }

        cin >> n;

        cout << coin_change_dp(a, m, n) << endl;
    }
}
