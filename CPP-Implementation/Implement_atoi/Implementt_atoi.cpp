#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        int multiplier = 1;
        long num = 0;
        bool not_numerical = false;

        for (int i = s.length() - 1; i >= 0; i -= 1) {

            if ((int) s[i] < 48  ||   (int) s[i] > 57) {

                if ((int) s[i] == 43  ||  (int) s[i] == 45) {
                    if (i == 0)
                        return num;
                }

                cout << -1 << endl;
                not_numerical = true;
                break;
            }

            int  digit = (int) s[i] - 48;
            num += digit * multiplier;
            multiplier *= 10; 
        }

        if (!not_numerical)
            cout << num << endl;
    }

    return 0;
}