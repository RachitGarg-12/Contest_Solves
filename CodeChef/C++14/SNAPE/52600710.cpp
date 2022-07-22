#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int b,l; cin>>b>>l;
        int min,max;
        min=(l*l - b*b );
        max=(l*l + b*b);
        
        cout<<fixed<<setprecision(6)<<sqrt(min)<<" ";
        cout<<fixed<<setprecision(6)<<sqrt(max)<<endl;
    }
	
	return 0;
}
