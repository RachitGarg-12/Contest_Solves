#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int odd=0,even=0;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            even++;
            
        }
        else {odd++;}
    }
    int d=odd-even;
    if(d>=0){cout<<d<<endl;}
    else {cout<<-d<<endl;}
	
	return 0;
}
