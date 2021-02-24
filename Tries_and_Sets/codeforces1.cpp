#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll solve(ll a,ll b,ll op) {
    if(a==0) return op;
   
   ll opt1=solve((a/b),b,op+1);
   ll opt2=solve(a,b+1,op+1);
   return min(opt1,opt2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        ll a,b;
       cin>>a>>b;
       cout<<solve(a,b,0)<<endl;
    }

}