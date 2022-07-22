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
        string s;cin>>s;
        string t="";int j=0,m=0;
        for(int i=0;i<k;i++){
            t += s[i];
        }
        for(int i=0;i<k;i++){
            if(i%2==0){
                s[k-i-1]=t[i-m];m++;}
            else{ s[k-i-1] = t[k-i+j];j++;}    
            
        }
       
        cout<<s<<endl;
  }
	return 0;
}