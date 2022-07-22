#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a , n , k , res , ans , i; 
	cin >> a>> n >> k ;
	n++;
	 ans =1;
	for( i =1;i<=k;i++){
	    res=a/ans;
	    cout<<res%n << " ";
	    ans*=n;
	}
	return 0;
}
