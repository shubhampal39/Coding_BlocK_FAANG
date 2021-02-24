// https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

ll solve(vector<int> &v)
{
        map<int,bool> mp;
       for(int i=0;i<v.size();i++)
       {
           if(mp.find(v[i])==mp.end())
           {
              mp[v[i]]=true;
           }
           else{
               return true;
           }
       }
       return false;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
       ll n;
       cin>>n;
       vector<int> vec;
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>x;
           vec.push_back(x);

       }
      if(solve(vec))
      {
          cout<<"true";
      }
      else{
          cout<<"false";
      }


return 0;
}