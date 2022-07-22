#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        string num;
        cin>>num;
        int count=0;
        for(int i=0;i<num.length()-1;i++)
        {
            if(num.substr(i, 3) == "101" || num.substr(i, 3) == "010" )
            {
                count=1;
                break;
            }
        }
        
        if(count==1)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl; 
        }
        
    }
	// your code goes here
	return 0;
}