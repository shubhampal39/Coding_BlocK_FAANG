#include<bits/stdc++.h>
using namespace std;

bool found(vector<int> &a,int num)
{
 for(int i=0;i<a.size();i++)
 {
       if(a[i]==num) return true;
 }   
     return false;
}

int maxconsecutive_subsequence(vector<int> &a)
{
     int ans=0; 
   for(int i=0;i<a.size();i++)
   {  int maxcount=1;
      int num=a[i];
      while(found(a,num+1))
      {
         maxcount++;
         num=num+1;
      }
      ans=max(maxcount,ans);
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