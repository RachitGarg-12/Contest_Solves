#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int f=1;
        for(int i=1;i<=n;i++){
            while(a[i]>=i){
                a[i]=a[i]-i;
                if(f==1){f=0;}
                else if(f==0){f=1;}
            }
        
        }
        
        if(f==0){cout<<"ALICE"<<endl;}
        else{cout<<"BOB"<<endl;}
        
    }
	// your code goes here
	return 0;
}
