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
        int n,k;cin>>n>>k;
        if(n==k){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        if(k<2 || k>n){cout<<-1<<endl;continue;}
        else{
            int a=0;
            for(int i=0;i<k-1;i++){
                cout<<(i+1)<<" ";
                a=i;
            }
            for(int i=0;i<n-a-1;i++){
                cout<<(n-i)<<" ";
            }
            cout<<endl;
        }
        
        
        
        
    }
	return 0;
}