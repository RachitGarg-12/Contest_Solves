#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3;
        cin>>s1>>s2>>s3;
        if(s1<s2){
            if(s3>s1){cout<<"Draw"<<endl;}
            else{cout<<"Alice"<<endl;}
         }
        else {
             if(s2<s3){cout<<"Bob"<<endl;}
             else{cout<<"Alice"<<endl;}
        }
    }
	// your code goes here
	return 0;
}
