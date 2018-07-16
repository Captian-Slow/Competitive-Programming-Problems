#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print_permutations (string s, int k) {

    //cout << s << endl; 

    if (k == s.length() - 1) {
        cout << s << " ";
        return;
    }

    for (int i = k; i < s.length(); i++) {
        swap (s[i], s[k]);
        print_permutations (s, k+1);
        //swap (s[i], s[k]);
    }
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        sort (s.begin(), s.end());

        print_permutations (s, 0);
        cout << endl;
    }

    return 0;
}