#include <iostream>
using namespace std;

int main() {
    
            int a,n,k;
        cin>>a>>n>>k;
        ++n;
        long long int base=n;
        for(int i=0;i<k;i++)
        {
            cout<<a%base<<" ";
            a/=n;
        }
        cout<<endl;
    
	
	return 0;
}
