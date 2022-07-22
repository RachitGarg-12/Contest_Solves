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
        int n,k,x;cin>>n>>k>>x;
        if(n==k){
            for(int i=0;i<n+1;i++){
                if(x==i){continue;}
                cout<<i<<" ";
            }
        }
        else if(n>k && k>=x){
           
                int max=0;
                while(n>0){
                    if(max==x){max++;continue;}
                    cout<<max<<" ";
                    max++;
                    if(max>=k){max=0;}
                    n--;
                }
            
          
            
        }
        else{
            cout<<-1<<" ";
        }
        cout<<endl;
    }
	return 0;
}