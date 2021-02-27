// https://leetcode.com/problems/container-with-most-water/
#include<bits/stdc++.h>
using namespace std;
int containermostwater(vector<int> v)
{
  int n=v.size();
 int low=0,high=n-1;
  int ans=INT_MIN;
  while(low<high)
  {
  int area=(high-low)*min(v[low],v[high]) ; 
  ans=max(area,ans);    
  
  if(v[low]<v[high])
  {
    low++;
  }
  else
  {
    high--;
  }
  }

return ans;
}

int main()
{
   int n;
   cin>>n;
   vector<int> a;
   int x;
   for(int i=0;i<n;i++)
      {cin>>x;
      a.push_back(x);
      }

    cout<<containermostwater(a);  
  return 0;
}