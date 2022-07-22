#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,num;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>num;
	    if(num%2==0)
	        cout<<num;
	    else
	        cout<<num-1;
	    cout<<endl;
	}
	return 0;
}
