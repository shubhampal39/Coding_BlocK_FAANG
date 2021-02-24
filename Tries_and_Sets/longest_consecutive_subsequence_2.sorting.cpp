//sorting method;
#include<bits/stdc++.h>
using namespace std;
int maxconsecutive_subsequence(vector<int> &a)
{
    sort(a.begin(),a.end());
    int ans=0,count=1; 
   for(int i=0;i<a.size()-1;i++)
   {
       if(a[i]==a[i+1]) continue;
        
       if(a[i]==a[i+1]-1)
       {
           count++;
       }
       else{ 
         cout<<count; 
         ans=max(ans,count);
         count=1;
     }

   ans=max(ans,count);
   }    
 return ans;
}

int main()
{
    vector<int> arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>x; arr.push_back(x); }
    cout<<maxconsecutive_subsequence(arr)<<endl; 
    return 0;
}