#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int quantity,price;
	    cin>>quantity>>price;
	    double expenses=0;
	    expenses=quantity*price;
	    
	    if(quantity>1000)
	       {
	           expenses=expenses-((expenses*10)/100);
	           cout<<fixed<<setprecision(6)<<expenses<<endl;
	       }
	   else
	           cout<<fixed<<setprecision(6)<<expenses<<endl;
	    
	}
	return 0;
}

	


