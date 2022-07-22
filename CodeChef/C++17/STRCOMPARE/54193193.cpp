#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool big;
        long long int ans=0;
        if(b[n-1] >a[n-1]){
            big= true;
        }else{big=false;}
        
        if(big){ans++;}
        
        for(int i=n-2;i>=0;i--){
            if(b[i]>a[i]){
                big=true;
                ans++;
            }
            else if(b[i]<a[i]){
                big=false;
                
            }
            else{ 
                if(big) ans++;    
            }
        }
        cout<<ans<<endl;
    }
	
	return 0;
}
