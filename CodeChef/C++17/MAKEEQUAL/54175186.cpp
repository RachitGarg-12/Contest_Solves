#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int max;
        int min;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0) { 
                max=a[i];
                min=a[i];}
            else {
                if(a[i]>max) max=a[i];
                if(a[i]<min) min=a[i];
            }
        }
        cout<<max-min<<endl;
     
    }
	
	return 0;
}
