#include<bits/stdc++.h>
using namespace std;
int sunnybuilding(vector<int> &a)
{
    if(a.size()==1)
    {
        return 1;
    }
    int maxheight=a[0],count=1;
    for(int i=1;i<a.size();i++)
    {
        if(maxheight<a[i])
        {
            maxheight=a[i];
            count++;
        }
    }
return maxheight;

}

int main()
{  vector<int> arr;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>x; arr.push_back(x); }
    
    cout<<(sunnybuilding(arr)); 
 
    return 0;
}