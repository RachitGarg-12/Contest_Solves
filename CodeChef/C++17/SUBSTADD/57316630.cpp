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
        int n,x,y,i,j,k;cin>>n>>x>>y;
        int a[n];int b[n];
        fo(i,n){ cin>>a[i];}
        fo(j,n){cin>>b[j];}
        bool g=true;
        fo(k,n){
            int t = b[k]-a[k];
            //cout<<t<<endl;
            if(t==x || t==y ){continue;}
            else{g=false;break;}
        }
            
        if(g==true){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
	return 0;
}