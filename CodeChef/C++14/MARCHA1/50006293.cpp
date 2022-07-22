#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int m;
  cin>>m;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  int flag=0;
  for(int i=0;i<(1<<n);i++){
    int sum=0;
    for(int j=0;j<n;j++){
      if(i&(1<<j))
      sum+=A[j];
    }
    if(sum==m)
    flag=1;
  }
  if(flag==1)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
return 0;
}
