#include <iostream>
using namespace std;

int main() {
       int t;cin>>t;
       while(t--){
           int n,i;
           cin>>n;
           bool isprime=true;
           
           if(n==0 || n==1){isprime=false;}
           
           for(i=2;i<=n/2;i++){
               if(n%i==0){
                   isprime=false;
               }
           }
           
           if(isprime){cout<<"yes"<<endl;}
           else{cout<<"no"<<endl;}
       }

	
	return 0;
}
