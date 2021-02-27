// https://leetcode.com/problems/distribute-candies/
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
     map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        return min(nums.size()/2,mp.size());
        
}
int main(){
 int n;
 cin>>n;
 vector<int> res;
 for(int i=0;i<n;i++)
 {   int x;
       cin>>x;
       res.push_back(x);
 }

 cout<<solve(res);
return 0;

}