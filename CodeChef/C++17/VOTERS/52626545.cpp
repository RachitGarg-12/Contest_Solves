#include <iostream>
#include <map>
using namespace std;

int main() {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    map<int,int> mp;
    int a[n1+n2+n3];
    for(int i=0;i<n1+n2+n3;i++){
        cin>>a[i];
        if(mp.find(a[i])!= mp.end()){
            mp[a[i]] += 1;
        }
        else{mp[a[i]]=1;}
    }
    int m=0;
    
    for ( auto it = mp.begin(); it != mp.end(); ++it  ){
   if((it->second)>=2){
       
       m++;
   } 
} 
    cout<<m<<endl;
      for ( auto it = mp.begin(); it != mp.end(); ++it  ){
   if((it->second)>=2){cout<<it->first<<endl;}
    } 
     
	
	return 0;
}
