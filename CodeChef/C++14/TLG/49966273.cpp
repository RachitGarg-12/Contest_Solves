#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int A1[n],A2[n],diff=0,Win=0,lead=0,A1sum=0,A2sum=0;
    for(int i=0;i<n;i++){
        cin>>A1[i]>>A2[i];
        A1sum += A1[i];
        A2sum += A2[i];
        if(A1sum>A2sum){
            diff=A1sum-A2sum;
            if(diff>lead){lead=diff;Win=1;}
        }
        else{
            diff=A2sum-A1sum;
            if(diff>lead){lead=diff,Win=2;}
        }
    }
    cout<<Win<<" "<<lead<<endl;
 	return 0;
}       
    
    
       
    
	

