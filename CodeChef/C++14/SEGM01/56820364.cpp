#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n =s.size();
        int j;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(count==0){j=i;count++;}
                else{count++;}}
        }
        if(count==0){cout<<"NO"<<endl;continue;}
        bool f=true;
        for(int i=j;i<j+count;i++){
            if(s[i]=='0'){ f=false;break;}
        }
        if(f==false){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
	
	return 0;
}
