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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        ll l=0,r=n-1,ans=0;
        while(l<=r){
            ll m=(l+r)/2;
            ll total=0;
            for(int i=m;i>=0;i--){
                int t = (int(s[i])-int('0')+ total)%10;
                if(t==0){continue;}
                total += 10-t;
                
            }
            if(total>k){ r= m-1;}
            else{ l= m+1;ans = m+1;}
            
        }
        cout<<ans<<endl;
        
    }
	return 0;
}