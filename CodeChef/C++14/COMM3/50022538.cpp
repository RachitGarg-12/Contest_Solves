#include <iostream>
using namespace std;
int distance(int x1 , int y1 ,  int x2 , int y2){
    return (x1-x2) *(x1-x2) + (y1-y2)* (y1-y2);
}
int main() {
	// your code goes here
	int t ; cin >> t;
	int r , x1 , x2 , x3 , y1 , y2 , y3 ;
	while(t--){
	    int cnt=0;
	    cin>> r >> x1 >> y1 >> x2>>y2>> x3>>y3;
	    if (distance(x1,y1,x2,y2)<=(r*r))cnt++;
	     if (distance(x1,y1,x3,y3)<=(r*r))cnt++;
	     if (distance(x2,y2,x3,y3)<=(r*r))cnt++;
	     if(cnt>=2){
	         cout<<"yes"<<endl;
	     }else {
	         cout<<"no"<<endl;
	     }
	}
	return 0;
}