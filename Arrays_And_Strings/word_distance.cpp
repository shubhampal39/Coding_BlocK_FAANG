#include<bits/stdc++.h>
using namespace std;

int word_distance(vector<string> &a,int n,string word1,string word2)
{  
    int first,second,ans=INT_MAX;
    for(int i = 0; i < n;i++)
    {
        if(a[i] == word1)
        {
           first = i;
        }
        if(a[i] == word2)
        {
            second = i;
        }
       ans=min(ans,abs(second-first));
    }
    return  ans;
}

int main()
{  vector<string> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   string x;
        cin>>x;
         arr.push_back(x); }
    
   string word1,word2;
   cin>>word1>>word2;
   cout<<word_distance(arr,n,word1,word2);
    return 0;
}