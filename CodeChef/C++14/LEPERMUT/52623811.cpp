#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    int count_inv=0;
	    int count_linv=0;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            if(arr[i]>arr[j])
	            count_inv++;
	        }
	    }
	    for(int i=0; i<n-1; i++)
	    {
	        if(arr[i]>arr[i+1])
	        count_linv++;
	    }
	    if(count_inv==count_linv) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

