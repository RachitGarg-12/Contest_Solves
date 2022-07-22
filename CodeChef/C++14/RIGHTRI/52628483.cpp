#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int count=0;
    while(n--){
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int sqd1 = pow(x2 - x1, 2) + pow(y2 - y1, 2);
        int sqd2 = pow(x3 - x2, 2) + pow(y3 - y2, 2);
        int sqd3 = pow(x3 - x1, 2) + pow(y3 - y1, 2);

        if (sqd1 + sqd2 == sqd3 || sqd2 + sqd3 == sqd1 || sqd1 + sqd3 == sqd2)
            count++;
        
    }
	cout<<count<<endl;
	return 0;
}
