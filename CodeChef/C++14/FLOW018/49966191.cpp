#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact=1;
        if(n==0){cout<<1<<endl;}
        else{
        while(n>=1){
             fact=fact*n;
            n--;
        }
        cout<<fact<<endl;
        }
    }
	
	return 0;
}
