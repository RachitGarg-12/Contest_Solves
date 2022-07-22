#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n=0;
        while(b%a!=0){
            a=a/2;n++;
        }
        while(a!=b){
            a=a*2;n++;
        }
        cout<<n<<endl;
    }
	
	return 0;
}
