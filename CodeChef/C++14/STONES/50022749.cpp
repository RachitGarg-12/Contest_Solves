#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	   string j,s;
	     cin>>j >> s;
	     int arr[256]={0};
	     for(int i=0;i<j.length();i++)
	     {
	         arr[j[i]]++;
	     }
	     int count = 0;
	     for(int i=0;i<s.length();i++)
	     {
	         if(arr[s[i]]>0)
	         {
	             count++;
	             //arr[s[i]]--;
	         }
	     }
	     
	   
	   cout<<count<<endl;
	}

	
	return 0;
}