#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int num = n;
	    int rev_num=0;
	    while(n>0){
	        int last_digit = n%10;
	        rev_num = rev_num*10 + last_digit;
	        n = n/10;
	    }
	    if(num==rev_num){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
	}
	
	return 0;
}
