#include <iostream>
using namespace std;

int main() {
    int t;
 cin>>t;
 while(t--){
      
     long long n,c;
      cin>>n>>c;
      int a[n];
      long long sum =0;
      for(int i =0; i<n;i++){
           cin>>a[i];
           sum +=a[i];
      }
      if(sum<=c){
           cout<<"Yes"<<endl;
      }
      else{
           cout<<"No"<<endl;
      }
 }
	
	return 0;
}
