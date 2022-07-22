#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n<=2){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";}
            cout<<endl;    
        }
        else{
        for(int i=1;i<n-1;i=i+2){
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    }
	return 0;
}
