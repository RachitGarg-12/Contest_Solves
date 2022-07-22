#include <iostream>
using namespace std;
int rev(int a){
    int r=0,rem;
    while(a>0){
        rem=a%10;
        r=r*10+rem;
        a=a/10;
    }
    return r;
}

bool Palindrome(int a){
    int k=rev(a);
    if(k==a){return true;}
    else {return false;}
}

int main() {
    int t;cin>>t;
    while(t--){
        int a;cin>>a;
        int count=0;
    
        while(true){
            a = a+ rev(a);
            count++;
            if(Palindrome(a)){
                break;}
        }
        cout<<count<<" "<<a<<endl;
    }
	// your code goes here
	return 0;
}
