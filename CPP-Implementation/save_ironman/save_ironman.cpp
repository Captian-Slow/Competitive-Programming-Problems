/*
    Created by Amit Kumar Gupta on 26/05/2018
    Problem Statement: https://practice.geeksforgeeks.org/problems/save-ironman/0
*/

#include<bits/stdc++.h>
#include <algorithm>

using namespace std;
#define ll long long int 
int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
     cin.ignore ();
    while(t--)
    {
       
        string s;
       
        getline(cin,s);
        
         transform(s.begin(), s.end(), s.begin(), ::toupper);
        string res="";
        for(int i=0;i<s.length();i++)
        {
          
            if(isalnum(s[i]))
            {
               res += s[i];
            }
        }
        //strupr(res);
        //cout<<s<<endl;
       
        string f=res;
        reverse(res.begin(),res.end());
       //cout<<f<<" "<<res<<endl;
        if(f==res)
        {
            cout<<"YES \n";
        }
        else
        {
            cout<<"NO \n";
        }
        
    }
    return 0;
}

