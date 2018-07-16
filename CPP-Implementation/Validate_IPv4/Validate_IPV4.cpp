#include <iostream>
#include <vector>

using namespace std;

int m_stoi (string s) {

    if (s == "")
        return -1;

    int multiplier = 1;
    long num = 0;
    bool not_numerical = false;

    for (int i = s.length() - 1; i >= 0; i -= 1) {

        if ((int) s[i] < 48  ||   (int) s[i] > 57) {
            
            if ((int) s[i] == 43  ||  (int) s[i] == 45) {
                if (i == 0)
                    return num;
            }

            return -1;
        }

        int  digit = (int) s[i] - 48;
        num += digit * multiplier;
        multiplier *= 10; 
    }

    return num;
}

bool is_num_valid (int num) {

    if (num < 0)
        return false;

    return (num >=0 && num <= 255);
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        if (s.length() > 15 || s.length() < 7) {
            cout << 0 << endl;
            continue;
        }

        int i = 0;
        string part = "";

        //First octet
        while (s[i] != '.' && i < s.length()) {            
            part += s[i];
            i++;
        }
        i++;
        if (! is_num_valid(m_stoi(part))) {
            cout << 0 << endl;
            continue;
        }

        part = "";
        //Second octet
        while (s[i] != '.' && i < s.length()) {            
            part += s[i];
            i++;
        }
        i++;
        if (! is_num_valid(m_stoi(part))) {
            cout << 0 << endl;
            continue;
        }

        part = "";
        //Third octet
        while (s[i] != '.' && i < s.length()) {            
            part += s[i];
            i++;
        }
        i++;
        if (! is_num_valid(m_stoi(part))) {
            cout << 0 << endl;
            continue;
        }

        part = "";
        //Fourth octet
        while (s[i] != '.' && i < s.length()) {            
            part += s[i];
            i++;
        }
        i++;
        if (! is_num_valid(m_stoi(part))) {
            cout << 0 << endl;
            continue;
        }

        cout << 1 << endl;
    }
    return 0;
}
