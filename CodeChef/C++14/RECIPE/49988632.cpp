#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n; 
	    int a[n];
	    int s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s=__gcd(s,a[i]);
	    }
	    int b[n];
	    for(int i=0;i<n;i++){
	        b[i]=a[i]/s;
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
