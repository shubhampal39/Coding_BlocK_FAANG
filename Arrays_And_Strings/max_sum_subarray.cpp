#include<bits/stdc++.h>
using namespace std;

    int maxSubArray(vector<int>& nums) {
      int  curr=0,maximum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];


            if(curr>maximum)
                maximum=curr;

          if(curr<0) curr=0;  ///currunt sum is negtative

        }
        
        return maximum;
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
  cout<<maxSubArray(vec);
            
    }
}