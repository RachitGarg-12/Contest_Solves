#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k,ch,c=0,f=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(k<=n/2) ch=k;
        else ch=n-k;
        
        for(int i=0;i<ch;i++){
            c += arr[i];
        }
        for(int i=ch;i<n;i++){
            f += arr[i];
        }
        cout<<f-c<<endl;
        
    }
	
	return 0;
}
