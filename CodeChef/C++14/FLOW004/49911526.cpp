#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,l;
	    cin>>n;
	     l=n%10;
	    
	    while(n>9){
	        n=n/10;
	    }
	    cout<<n+l<<endl;
	
	}
	return 0;
}
