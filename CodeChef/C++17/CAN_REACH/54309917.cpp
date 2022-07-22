#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(x<0 ) {x = -x;}
        if(y<0 ) {y = -y;}
        if(x%k==0 && y%k==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    }
	
	return 0;
}
