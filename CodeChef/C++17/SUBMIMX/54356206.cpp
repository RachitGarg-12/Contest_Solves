#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long int lli;

void solve(){
    lli n,m,sum,n_zero,z,y,c=0;
    cin>>n>>m;
    n_zero=n-m;
    if(n_zero<=m+1){cout<<n_zero;}
    else{
        y =n_zero/(m+1);
        z=(n_zero)%(m+1);
        lli cy=(m+1)-z;
        lli cx=y+1;
        sum= cy *y* (y+1) /2 + z * (y+1) * (y+2) /2;
        cout<<sum;
    }
    cout<<endl;
}

int main() {
    lli t;
    cin>>t;
    while(t--){
       solve();
        
    }
	
	return 0;
}
