#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    
	    float base,DA,HRA;
	    cin>>base;
	    
	    
	    if(base<1500)
	    {
	        HRA=(10*base)/100;
	        DA=(90*base)/100;
	    }
	    else 
	    {
	        HRA=500;
	        DA=(98*base)/100;
	    }
	    float gross_salary=0;
	    
	    gross_salary=base+HRA+DA;
	    cout<<fixed<<setprecision(2)<<gross_salary<<endl;
	}
	return 0;
}
