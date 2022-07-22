#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int X,Y,A,B,K ;
        cin>>X>>Y>>A>>B>>K;
        int pet=X;
        int dies=Y;
        for(int i=0;i<K-1;i++){
            pet += A;
            dies += B;
        }
        if(pet>dies){cout<<"DIESEL"<<endl;}
        else if(pet==dies){cout<<"SAME PRICE"<<endl;}
        else{cout<<"PETROL"<<endl;}
    }
	
	return 0;
}
