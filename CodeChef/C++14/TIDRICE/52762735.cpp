#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s[n][2];
        int a[n];
        for(int i=0;i<n;i++){
            cin>>s[i][0]>>s[i][1];
            if(s[i][1]=="+") a[i]=1;
            else if(s[i][1]=="-") a[i]= -1;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==0) continue;
            for(int j=0;j<i;j++){
                if(s[i][0]==s[j][0]&& a[j]!=0){
                    a[j]=0;
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum += (a[i]);
        }
        cout<<sum<<endl;
    }
	
	return 0;
}
