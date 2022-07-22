 
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
 
int avail[3], pr[3];
int r;
int req[3] = {0, 0, 0};
 
bool canMakeHamburger(int m) {
    int extraReq[3];
    for(int i = 0; i < 3; i++){
        extraReq[i] = req[i] * m;
        extraReq[i] -= avail[i];   
    }
 
    int cost = 0;
    for(int i = 0; i < 3; i++){
        if(extraReq[i] > 0) cost += extraReq[i] * pr[i];
    }
 
    return cost <= r;
 
}
 
int32_t main() {
 string ss;
    cin >> ss;
    
 
    for(const char &i: ss){
        if(i == 'B') req[0]++;
        else if(i == 'S') req[1]++;
        else req[2]++;
    }
 
    for(int i = 0; i < 3; i++){
        cin >> avail[i];
    }
 
    for(int i = 0; i < 3; i++){
        cin >> pr[i];
    }
 
    cin >> r;
 
    int s = 0, e = 1e14, mid, ans = 0;
 
    while(s <= e) {
        mid = s + (e - s) / 2;
        if(canMakeHamburger(mid)){
            ans = mid;
            s = mid + 1;
        }
        else 
            e = mid - 1;
    }
 
    cout << ans;
 
 
 return 0;
}