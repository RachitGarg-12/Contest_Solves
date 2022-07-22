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
        ll n;cin>>n;
        ll a[n];
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int x=a[i];
            for(int j=i+1;j<n;j++){
                if(i==j){continue;}
                int y=a[j];
                for(int k=j+1;k<n;k++){
                    int z=a[k];
                    if(x==y==z){continue;}
                    ll g=abs((x-y)*z),e=abs((y-z)*x),f=abs((z-x)*y);
                    ll val = max(g,max(e,f));
                    if(val>ans){
                        ans=val;
                    }}}}
        cout<<(a[n-1]-a[0])*a[n-2]<<endl;
        
    }
	return 0;
}