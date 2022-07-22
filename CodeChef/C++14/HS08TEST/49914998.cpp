#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int x;
    float y;
    float z=0.50;
    cin>>x>>y;
    if(y>=x+z && x%5==0){
        cout<<y-(x+z)<<endl;
    }
        
           
     else{cout<<fixed<<setprecision(2)<<y<<endl;}
    
        
   
	
	return 0;
}
