#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int wp[n],wr[n],count=0,k=0;
	    
	    for(int i=0;i<n;i++)
	        cin>>wp[i];
	    for(int i=0;i<n;i++)
	        cin>>wr[i];
	        
	    sort(wp,wp+n);
	    sort(wr,wr+n);
	    while(k<n)
	    {
	        if(wp[count]<=wr[k])
	            count++;
	       k++;
	    }
	   
	      cout<<count<<endl;  
	}
	return 0;
}
