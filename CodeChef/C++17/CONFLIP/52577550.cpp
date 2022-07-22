#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int g;cin>>g;
        while(g--){
            int I,N,Q;
            cin>>I>>N>>Q;
            int count_I;
            if(N%2==0){
                count_I=N/2;
                cout<<count_I<<endl;
            }else{
                count_I=(N-1)/2;
                if(I==Q) cout<<count_I<<endl;
                else cout<<N-count_I<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}
