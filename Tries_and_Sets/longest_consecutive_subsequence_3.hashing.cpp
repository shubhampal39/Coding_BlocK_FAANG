//sorting method;
#include<bits/stdc++.h>
using namespace std;
int maxconsecutive_subsequence(vector<int> &a)
{
unordered_set<int> s;
int ans=0;
for(int i=0;i<a.size();i++)
{
    s.insert(a[i]);
}

for(int i=0;i<a.size();i++)
{
    if(s.find(a[i]-1)==s.end())
    {
        int j=a[i];
        while(s.find(j)!=s.end())
             {j++;}

       ans=max(ans,j-a[i]);  
    }

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