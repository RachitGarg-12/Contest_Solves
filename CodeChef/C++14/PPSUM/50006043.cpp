#include<iostream>
using namespace std;
int sum(int n)
{
  return n*(n+1)/2;
}

int main()
{
  int t, n, d;
  cin>>t;
  while(t--)
  {
   cin>>d>>n;
   while(d--)
   {
     n=sum(n);
   }
   cout<<n<<endl;
  }  
  return 0;
}