#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool camp(int a,int b)
{
    string x=to_string(a);
    string y=to_string(b);
    return x+y>y+x;
}

void biggestnumber(vector<int> &v,int n)
{
   sort(v.begin(), v.end(),camp);
   int flags=0;
   for(int i=0;i<n;i++)
   {
       if(v[i]!=0)
       {
           flags=1;
       }
   }
   if(flags)
   {
       string s="";
       for(int i=0;i<n;i++)
       {
       s+=to_string(v[i]);
       }

        cout<<s<<endl;    
   }
   else{
       cout<<"0"<<endl;
   }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
     {
       int n;
       cin>>n;
        vector<int> v;

        for(int i=0;i<n;i++)
        {  int input;
            cin>>input;
            v.push_back(input);
        }
       biggestnumber(v,n);
      }
return 0;
}