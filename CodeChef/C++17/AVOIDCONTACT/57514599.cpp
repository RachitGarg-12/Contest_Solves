//Rachit Garg
#include<bits/stdc++.h>
#include <iostream>
#include <string>
#define fo(i, n) for (i = 0; i < n; i++)
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
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--){
        ll x,y;cin>>x>>y;
        if(y==0){cout<<x<<endl;continue;}
        if(x==y){cout<<x+(x-1)<<endl;continue;}
        cout<<2+x-y+2*(y-1)<<endl;
        
    }
	return 0;
}