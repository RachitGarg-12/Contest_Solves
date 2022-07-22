#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int min=1000000;
	for(int i=0;i<n;i++){
	    long long int x;
	    cin>>x;
	    long long int ar[x];
	    for(int j=0;j<x;j++){
	        cin>>ar[j];
	    }
	    sort(ar,ar+x);
	    for(int i=0;i<x;i++){
            ar[i]=ar[i+1]-ar[i];
        }
        sort(ar,ar+x);
	    cout<<ar[0]<<endl;
	}
	return 0;
}
