#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() {
	int test;
	int num1, num2;
	cin>>test;
	for(int i = 0; i<test;i++)
	{
	    cin>>num1>>num2;
	    cout<<gcd(num1, num2)<<" ";
	    cout<<lcm(num1, num2)<<endl;
	    
	}
	return 0;
}