// https://leetcode.com/problems/summary-ranges/
#include<bits/stdc++.h>
using namespace std;

vector<string> solve(vector<int> &nums)
{
    vector<string> res;
    int i=0;
    while(i<nums.size()){
       string temp=to_string(nums[i]);
       int num=nums[i];
        while(i+1<nums.size() && nums[i]+1==nums[i+1])
        {
            i++;
        }
        if( nums[i]!=num){
            temp+="->";
            temp+=to_string(nums[i]);
        }
        res.push_back(temp);
        i++;
    }

    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<string> ans=solve(arr);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;

}