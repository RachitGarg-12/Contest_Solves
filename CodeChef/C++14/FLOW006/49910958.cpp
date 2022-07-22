#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a;
	    cin>>a;
	    int sum=0;
	    while(a!=0){
	        sum = sum + a%10;
	        a = a/10;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
