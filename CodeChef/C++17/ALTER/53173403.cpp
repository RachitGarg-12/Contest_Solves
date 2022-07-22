#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        int A=p/a;
        int B=q/b;
        if(p%a==0 && q%b==0){
            if(A>=B){
                if(A==B || A==B+1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else{
                if(B==A+1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else{cout<<"NO"<<endl;}

        
    }
	// your code goes here
	return 0;
}
