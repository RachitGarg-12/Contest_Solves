#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ; cin >> t;
	while(t--){
	    int n ; cin >> n ;char s[n];

	    for(int i =0;i<n;i++){
	        cin >> s[i];
	        
	    }
	       
	        for(int i =0;i<n;i++){
	            if(s[i]=='I' ){
	                cout<<"INDIAN"<<endl;
	                break;
	            }else if (s[i]=='Y'){
                 cout<<"NOT INDIAN"<<endl;
                 break;
	            }else if(s[i]=='N'&&i==n-1){
	                cout<<"NOT SURE"<<endl;
	                break;
	            }
	        }
	    
	}
	return 0;
}
