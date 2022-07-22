#include <iostream>
#include <string>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char a,b;
    cin>>a>>b;
    if(a=='R' || b=='R'){cout<<"R"<<endl;}
    else{
        if( a=='B' || b=='B'){cout<<"B"<<endl;}
        else{cout<<"G"<<endl;}
    }
	return 0;
}