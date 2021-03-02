#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<string> &nums)
{
    vector<vector<int>> ans;

 map<vector<int>,vector<string>> mp;
 for(int i=0;i<nums.size();i++)
 {
 vector<int> freq(26,0);

     string s=nums[i];
     for(auto j:s){
         freq[j-'a']++;
     }
     mp[freq].push_back(s);

 }

//  for(int i=0;i<mp.size();i++)
//  {
//    ans.push_back(mp[i].value());    
//  }

        for(auto value:mp)
        {
            ans.push_back(value.second);
        }
        
}
int main(){
   int 

    return 0;
}