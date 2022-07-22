//Rachit Garg
#include<bits/stdc++.h>
#include <iostream>
#define fo(i, n) for (i = 0; i < n; i++)
#define fa(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
#define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
#define ll long long 
#define asort(a) sort(a.begin(), a.end())
#define dsort(a) sort(a.begin(), a.end(), greater<int>())
using namespace std;

bool prime(int n){
	if(n<0){
		return false;
	}
	for(int i =2;i*i<n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
bool palindrome(int n){
	int r,sum = 0,k;
	k = n;
	while(n>0){
	r = n%10;
	sum = sum * 10 + r;
	n = n/10;
}
	if( k == sum){
		return true;
	}
	else{
		return false;
	}
}

string isPalindrome(string S)
{ for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}
   
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    #endif
    
    int n, x, y;
    string a;

    cin >> a;
    n = a.size();

    x = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'a')x++;
        else break;
    }
    y = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 'a')y++;
        else break;
    }

    if (x == n) {
        cout << "Yes" << endl;
        
    }
    else if (x > y) {
        cout << "No" << endl;
        
    }
    else{string p="";
        for (int i = x; i < (n - y); i++) {
            p += a[i];
        }
    string h= isPalindrome(p);
    cout<<h<<endl;
   }
        
	return 0;
}