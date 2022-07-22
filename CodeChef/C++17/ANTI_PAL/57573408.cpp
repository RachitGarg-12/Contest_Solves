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
        ll n;cin>>n;
        string s;cin>>s;
        if(n%2!=0){cout<<"NO"<<endl;continue;}
        vector<pair<ll,char>> v;
        map<char,ll> m;
        for(ll i=0;i<n;i++){
            ll t= s[i]-'0';
            v.pb({t,s[i]});
            m[s[i]]++;
            
        } bool b=true;
        for(auto i:m){ if(i.second>n/2){b=false;break;}}
        if(b==false){ cout<<"NO"<<endl;continue;}
        else{
            cout<<"YES"<<endl;
        sort(v.begin(),v.end());
        string ans="";
        ll it;
        for(it=0;it<n/2;it++){
           ans += v[it].second;
           
        }
        ll ii=n;
        for(ii=n-1;ii>=n/2;ii--){
            ans += v[ii].second;
        }
        
        for(ll i=0;i<n;i++){
            cout<<ans[i];}
            cout<<endl;
        }
        
        
        
    }
	return 0;
}