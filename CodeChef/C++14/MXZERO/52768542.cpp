#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int t=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) t++;
        }
        if(t%2==1){
            cout<<t<<endl;
        }else if(t%2==0){
            cout<<n-t<<endl;
        }
        
    }
	
	return 0;
}
