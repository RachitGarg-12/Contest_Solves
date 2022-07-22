#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n],dep[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        for(int i=0;i<n;i++){cin>>dep[i];}  
        sort(arr,arr+n);
        sort(dep,dep+n);
        int count=1;
        int i=1,j=0;
        while(i<n){
            if(dep[j]>arr[i]){ count++;i++;}
            else {j++;i++;}
        }
        cout<<count<<endl;
    }
	
	return 0;
}
