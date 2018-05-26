/*
    Created by Amit Kumar Gupta on 26/05/2018
    Problem Statement: https://practice.geeksforgeeks.org/problems/four-elements/0
*/

#include <iostream>

using namespace std;


int sum_of_four(int A[], int n, int X) {

    int flag =0;
    for (int i = 0; i < n-3; i++) {
        for (int j = i+1; j < n-2; j++) {
            for (int k = j+1; k < n-1; k++) {
                for (int l = k+1; l < n; l++) {
                    if (A[i] + A[j] + A[k] + A[l] == X){
                        flag=1;
                    }
                }
            }
        }
    }
    if(flag==1) {
          return 1;
    }
    else {
        return 0;
    }
}

int main() {

    ios_base::sync_with_stdio(false);

	int t, n, sum, arr[102];

    cin >> t;
    while (t > 0) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> sum;
        cout << sum_of_four(arr, n, sum);
        cout << "\n";
        t--;
    }
}
