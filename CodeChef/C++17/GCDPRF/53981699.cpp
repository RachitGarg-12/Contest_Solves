#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long a[n];
	    for (int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int pos = true;
	    for (int i=1; i<n; i++){
	        if (a[i-1]%a[i]!=0) pos = false;
	    }
	    if (pos){
	        for (int i=0; i<n; i++){
	            cout<<a[i]<<" ";
	        }
	    }
	    else{
	        cout<<-1;
	    }cout<<endl;
	    
	}
	return 0;
}