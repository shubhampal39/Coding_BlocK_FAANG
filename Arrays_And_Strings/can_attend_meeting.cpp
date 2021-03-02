#include<bits/stdc++.h>
using namespace std;

string room_meeting(vector<vector<int> >&nums,int n)
{  sort(nums.begin(),nums.end());
     int i=1;
     while(i<nums.size())
     {
          if(nums[i][0]<nums[i-1][1])
                return "false";
     }

     return "true";
}
int main()
{
   vector<vector<int>> intervals;
     int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
        vector<int> v;
        int y, x;
        cin>>x>>y;
         v.push_back(x);
         v.push_back(y);
         intervals.push_back(v);
     }
    
   cout<<room_meeting(intervals,n);
   
    return 0;
}