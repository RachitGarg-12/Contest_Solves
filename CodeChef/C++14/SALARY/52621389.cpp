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
        int steps=0,beg=0,l=n-1;
        while(l>beg){
            steps += a[l]-a[beg];
            l--;
        }
        cout<<steps<<endl;
    }
	
	return 0;
}
