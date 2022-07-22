#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        char first,second,third;
        cin>>first>>second>>third;
        char a[3];
        a[0]=first;
        a[1]=second;
        a[2]=third;
        char x,y;
        cin>>x>>y;
        for(int i=0;i<3;i++){
            if(a[i]==x || a[i]==y){
                cout<<a[i]<<endl;
                break;
            }
        }
        
    }
	
	return 0;
}
