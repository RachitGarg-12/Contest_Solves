#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int p=1;
        while(n>1)
        {
            n=n/2;
            p=p*2;
        }
        
        cout<<p<<endl;
    }
	// your code goes here
	return 0;
}
