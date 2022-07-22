//Rachit Garg
#include <iostream>
#include <string>
#define fo(i, n) for (i = 0; i < n; i++)
#include<bits/stdc++.h>
#define fa(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
#define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
#define ll long long
#define asort(a) sort(a.begin(), a.end())
#define dsort(a) sort(a.begin(), a.end(), greater<int>())
using namespace std;
   
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,r ;
    cin>>n>>r ;
    string s;
    cin>>s ;
    int ans = 0;
    int c = 0 ;
    vector<int>count;
    for(int i = 0 ;i<n ;i++){
        if(s[i] == '0'){
            c+=1 ;
        }
        else{
            count.push_back(c) ;
            c=0 ;
        }
    }

    count.push_back(c) ;

    for(auto i:count){
        ans+=(i/r) ;
    }
    int m = 0 ;
    for(int i = 0 ;i<count.size() ;i++){
        int val = ans ;
        val-= count[i]/r ;
        val-= count[i+1]/r ;
        val += (count[i] + count[i+1] +1) /r ;
        m = max(m,val) ;
    }


    cout << m << endl;
    }
	return 0;
}