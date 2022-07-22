#include <iostream>
#include <string>
using namespace std;

int main() {
    long long int t;cin>>t;
    while(t--){
        long long int l;cin>>l;
        string s;cin>>s;
        long long int c=0;
        for(int i=0;i<l;i++){
            if(s[i]=='1') c++;
        }
        c = (c*(c+1))/2;
        cout<<c<<endl;
            
        
    }
	
	return 0;
}
