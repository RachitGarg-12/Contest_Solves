#include <iostream>
#include <string>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int arrmx(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<a[i]){max=a[i];}
    }
    return max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s=0;
        for(int i=1;i<n;i++){
            if(a[i-1]==a[i]){s++;}
        }
        if(s==n-1){cout<<0<<endl;continue;}
        else{
            int max= arrmx(a,n);
            if(a[n-1]==max){cout<<1<<endl;}
            else{cout<<2<<endl;}
            
        }
        

    }
	
	return 0;
}