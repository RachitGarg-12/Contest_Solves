#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
       
        for(int i=0;i<n;i++){
           cin>>arr[i]; 
        }
        sort(arr,arr+n);
        int sum=0;
        sum=arr[0]+arr[1];
        cout<<sum<<endl;
    }

    return 0;
}
