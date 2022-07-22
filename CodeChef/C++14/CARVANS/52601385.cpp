#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=1; 
        for(int i=1;i<n;i++){
            if(a[i-1]>=a[i]) count++;
            else a[i]=a[i-1];
        }
        
        cout<<count<<endl;
    }
	
	return 0;
}
