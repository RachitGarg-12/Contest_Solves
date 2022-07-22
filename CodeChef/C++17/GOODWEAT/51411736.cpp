#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int A[10];
        int count=0;
        for(int i=1;i<=7;i++){
            cin>>A[i];
        }
        for(int i=1;i<=7;i++){
            if(A[i]==1) {count++;}
        }
        
        if(count>=4){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    }
	
	return 0;
}
