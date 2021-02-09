// element that appears more than n/2 times/
#include<bits/stdc++.h>
using namespace std;
int maxlength=INT_MIN;

int checkstringunique(string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]-'a']==1) return 0;

         arr[s[i]-'a']++;

    }
    
    return s.length();

}
int coutmaxsize(vector<string> &v,string s,int i){
        if(i==v.size())
        {
           return checkstringunique(s);
           
        }
         int opt1=INT_MIN,opt2=INT_MIN;
        if(s.length()+v[i].length()<=26)
        {
          opt1=coutmaxsize(v,s+v[i],i+1); 
        }

        opt2=coutmaxsize(v,s,i+1);
       
   return max(opt1,opt2);
}

int main()
{ 
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   cout<<coutmaxsize(v,"",0);
    return 0;
}