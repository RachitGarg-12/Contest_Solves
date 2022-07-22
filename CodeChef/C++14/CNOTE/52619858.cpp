#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int p[n],c[n];
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>p[i]>>c[i];}
        if(x<=y){cout<<"LuckyChef"<<endl;}
        else{
            for(int i=0;i<n;i++){
            if(c[i]<=k && y+p[i]>=x ) {cout<<"LuckyChef"<<endl;flag=true; break;}
             }
          if (!flag) {cout<<"UnluckyChef"<<endl;}
                
        }
    }
	return 0;
}
