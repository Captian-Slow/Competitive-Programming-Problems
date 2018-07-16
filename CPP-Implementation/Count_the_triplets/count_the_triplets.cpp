#include <iostream>
#include <vector>
#include <algorithm>

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

        for (int i = 0; i < n; i++) {

            a[i] = a[i] * a[i];
        }

        sort (a.begin(), a.end(), greater <int>());

        bool found = false;
        int tcount = 0;
        for (int i=0 ; i < n; i++) {

            int l = i+1, h = n -1;

            while (l < h) {

                int sum = a[l] + a[h];



                if (sum == a[i]) {
                    found = true;
                    break;
                }

                else if (sum < a[i])
                    h--;
                else
                    l++;
            }
       }

        if (found)
            cout << "Yes"<< endl;
       else
            cout << "No"<< endl;
    }

    return 0;

}

