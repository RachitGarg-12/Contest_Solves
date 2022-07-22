#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
         int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool dp[n+1][sum+1];
	    for(int i=0;i<=n;i++)
	    {
	        dp[i][0]=true;
	    }
	    for(int i=1;i<=sum;i++)
	    {
	        dp[0][i]=false;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(a[i-1]>j)
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
	            }
	        }
	    }
	    if(dp[n][sum])
	    {
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No"<<endl;
	    }
        
    }
	// your code goes here
	return 0;
}
