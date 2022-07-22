#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int a,b;
	     cin>>a>>b;
	     a=a-1;
	     b=b-1;
	     long long int ans=1;
	     int i=a,j=b;
	     if(b>a-b)b=a-b;
	     for(int i=0;i<b;i++)
	     {
	          ans*=(a-i);
	          ans/=(i+1);
	     }
	     cout<<ans<<endl;
	}
	return 0;
}
