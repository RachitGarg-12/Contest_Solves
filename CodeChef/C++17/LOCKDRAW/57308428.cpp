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
        int a,b,c;
        cin>>a>>b>>c;
        int mx= max(a,max(b,c));
        int o = (a+b+c)-mx;
    
        if(mx==o){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    }
	return 0;
}