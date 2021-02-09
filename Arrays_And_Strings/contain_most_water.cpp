//Container Containing Most Water

#include<bits/stdc++.h>
using namespace std;

int containwater(vector<int> v)
{
   int left=0,right=v.size();
   int Totalwater=0; 
   while(left<right)
   {
       if(v[left]<v[right])
       {
           

       }
   } 

return Totalwater;
}

int main()
{ 
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    return 0;
}