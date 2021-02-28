#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums,int k)
{
  priority_queue<int,vector<int>,greater<int>> p;//min heap
  int count = 0;
  for(int i=0; i<nums.size();i++){
        if(count<k)
        {
            p.push(nums[i]);
            count++;  
        }
        else{
            if(nums[i]>p.top()){
                p.pop();
                p.push(nums[i]);
            }
        }
  }
  return p.top();
}

int main() {
int n,k;
cin>>n>>k;
  vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

   cout<<solve(v,k);
    return 0;
}
