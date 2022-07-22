#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<1<<" ";
        for(int i=1;i<=n;i++){
            long long int s=pow(2,i-1);
            cout<<s<<" ";
        }
        
        cout<<endl;
    }
	
	return 0;
}
