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
        int n;cin>>n;
        string s;cin>>s;
        if(n<4){cout<<0<<endl;continue;}
        
        int c1=0,c0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){c1++;}
            else{c0++;}
        }
        if(c1<2||c0<2){cout<<0<<endl;continue;}
        if(c1<=c0){cout<<c1-1<<endl;}
        else{cout<<c0-1<<endl;}
    }
	return 0;
}