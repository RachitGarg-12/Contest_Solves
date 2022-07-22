#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        int m= a+b;
        int n=p+q;
        if(a==p && b==q){cout<<0<<endl;}
        else{
        if(m%2==0 ){
            if(n%2==0){cout<<2<<endl;}
            else{cout<<1<<endl;}
        }else{
            if(n%2==0){cout<<1<<endl;}
            else{cout<<2<<endl;}
        }
        } 
    }
	
	return 0;
}
