#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        long long int ans=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]<=i){
                ans += (1+n-i);
            }
        }
     cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
