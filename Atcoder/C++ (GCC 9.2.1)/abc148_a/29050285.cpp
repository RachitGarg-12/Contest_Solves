//Rachit Garg
#include<bits/stdc++.h>
using namespace std;
void read(vector<int> &a);
void read(vector<string> &a);
void read(vector<vector<int>> &a);
void read(vector<pair<int, int>> &a);
#define all(arr) arr.begin(), arr.end()
#define fo(i, n) for (i = 0; i < n; i++)
#define fa(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pb push_back
#define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
#define ll long long 
#define asort(a) sort(a.begin(), a.end())
#define dsort(a) sort(a.begin(), a.end(), greater<int>())
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define mod 1000000007


    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;cin>>a>>b;
    for(int i=1;i<=3;i++){
        if(i!=a && i!=b){cout<<i<<endl;}
    }

        
	return 0;
}

///////////////////////////////////////////
void read(vector<int> & a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
}
void read(vector<string> & a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
}
void read(vector<vector<int>> & a)
{
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a[i].size(); j++)
            cin >> a[i][j];
}
void read(vector<pair<int, int>> & a)
{
    for (int i = 0; i < a.size(); i++)
        cin >> a[i].first >> a[i].second;
}