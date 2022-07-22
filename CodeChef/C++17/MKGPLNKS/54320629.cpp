#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int n_w=0;
        int n_b=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){continue;}
            else if(s[i]!=s[i+1]){
                if(s[i]=='W'){n_w++;}
                else{n_b++;}
            }
        }
        if(s[n-1]=='W'){n_w++;}
        else{n_b++;}
        int ans=min(n_w,n_b);
        cout<<ans<<endl;
    }
	
	return 0;
}
