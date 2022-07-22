#include <iostream>
using namespace std;

int main(){
    int  t, B;
	int count;
	
	cin>>t;
	while(t--)
	{
	    count = 0;
	    cin>>B;
	    
        while(B>2) 
        {
            count += (B-2)/2;
            B -= 2;
        }
        
        cout<<count<<endl;
	}
	
	
	return 0;
}
