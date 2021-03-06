#include<bits/stdc++.h>
using namespace std;
int next(vector<int> &a,int i)
{
   return (i+a[i]+a.size())%a.size(); //not give negative elemement
}

bool  circularray(vector<int> &v,int n)
{  
    for(int i=0;i<n;i++)
    {
       int slow=i,fast=i;
        if(v[i]==0) continue;

        while (
        v[slow]*v[next(v,slow)]>0 && // to check next value should not be negative
        v[fast]*v[next(v,fast)]>0 &&  
        v[fast]*v[next(v,next(v,fast))]>0
        )
        {
          slow=next(v,slow);
          fast=next(v,next(v,fast));
          if(slow==fast)
          {
              //cycle is present but cycle length should be >1
              if(slow==next(v,slow))
              {
                  break;
              }
              return true;
          }

        }

        //assign zero to arry
          slow=i;
          int val=v[slow];
          while(val*v[slow]>0)
          {
              int x=slow;
              slow=next(v,slow);
              v[x]=0;
          }
    }
    return false;
}

int main()
{  vector<int> arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>x; arr.push_back(x); }
    
    if(circularray(arr,n)) 
       cout<<"1";
    else
        cout<<"0";   

    return 0;
}