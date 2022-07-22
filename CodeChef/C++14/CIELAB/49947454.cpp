#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int d=a-b;
    int l=d%10;
    if(l==9){
        d=d-1;
    }
    else{d=d+1;}
    cout<<d<<endl;
	return 0;
}        
    
    
	

