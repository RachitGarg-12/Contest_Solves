#include <iostream>
using namespace std;

int rev(int a){
    int rev=0,rem;
    while(a>0){
        rem=a%10;
        rev= rev*10+rem;
        a=a/10;
    }
    return rev;
}

int main() {
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum;
        sum= rev(a)+rev(b);
        int revsum= rev(sum);
        cout<<revsum<<endl;
    }
	// your code goes here
	return 0;
}
