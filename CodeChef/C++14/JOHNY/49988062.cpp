#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    int count=1,john=a[k-1];
    sort(a,a+n);
    
    for(int i=0;i<n;i++)
    {
        if(john==a[i])
            break;
        count++;
    }
    cout<<count<<endl;
    }
	
	return 0;
}
