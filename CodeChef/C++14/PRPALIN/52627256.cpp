#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	if(n<0){
		return false;
	}
	for(int i =2;i*i<n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
bool palindrom(int n){
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
int main(){
	int n;
	cin>>n;
	while(true){
	    if(palindrom(n) && prime(n)){
	        break;
	    }
	    else{
	        n++;
	    }
	}
	cout<<n<<endl;
}