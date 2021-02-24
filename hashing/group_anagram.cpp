// https://leetcode.com/problems/group-anagrams/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(vector<stirng> &v)
{
    map<vector<int>>vector<string>> mp;
    for(auto s: v)
    {
           vector<int> alpha(26,0);
        for(auto i:s)
        {
              alpha[i-'a']++;
        }
        map[alpha].push_back(s);
    }
    
    for(auto i:mp)
    {
        for(auto m:i)
        {
            cout <<m;
        }
        cout << end;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
       ll n;
       cin>>n;
       vector<string> v;
       for(int i=0;i<n;i++)
       {  string s;
           cin>>s;
           v.push_back(s);
       }
       solve(v);

return 0;
}