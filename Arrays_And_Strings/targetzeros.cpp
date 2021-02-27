#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int> vec;
         n=floor(n/2);
        for(int i=1;i<=n;i++){
            vec.push_back(i);
            vec.push_back((i*-1));  
        }
        if(n%2==1)
        {vec.push_back(0); }

        sort(vec.begin(),vec.end());
        
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
}