#include <iostream>
using namespace std;
bool palindrome(int n){
	int r,sum = 0,k;
	k = n;
	while(n>0){
	r = n%10;
	sum = sum * 10 + r;
	n = n/10;
}
	if( k == sum){
		return true;
	}
	else{
		return false;
	}
}
int main() {
    int t;cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        for(int i=l;i<=r;i++){
            if(palindrome(i)) ans += i;
        }
        cout<<ans<<endl;
        
    }
	
	return 0;
}
