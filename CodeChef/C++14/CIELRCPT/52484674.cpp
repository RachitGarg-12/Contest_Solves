#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int menuitems=0;
        for(int i=11; i>=0; i--)
        {
            int itemspower = pow(2, i);
            while(n>=itemspower)
            {
                n = n-itemspower;
                menuitems++;
            }
        }
        cout<<menuitems<<endl;
    }
	return 0;
}
