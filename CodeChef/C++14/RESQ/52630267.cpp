#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);  
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       int x;
       cin>>x;
       int diff=x-1,sum;
       int sqrt_n = pow(x, 0.5);
       for(int i=2;i<=sqrt_n;i++)
       {
           if(x%i==0)
           {
               sum=abs((x/i)-i);
               if(sum<=diff)
               diff=sum;
                 
           }
       }
       cout<<diff<<"\n";
       diff=0;
   }
return 0;
}