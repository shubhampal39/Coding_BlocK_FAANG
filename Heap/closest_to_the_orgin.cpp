#include <bits/stdc++.h>
using namespace std;
vector< vector<int>> kclosest(vector< vector<int>> &points,int k)
{
        int n=points.size();
        priority_queue<int> h;
        for(int i=0;i<n;i++)
        {
                int dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
                if(h.size()<k||dist<h.top())
                {
                       if(h.size()==k)
                         h.pop();
                       h.push(dist);
                }
        }

        int num=h.top();
        int i=0,j=n-1;
        while(i<=j)
        {
            int dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            if(dist<=num) i++;
            else{swap(points[i],points[j]);j--;}
        }
        points.erase(points.begin()+k,points.end());
        return points
}
int main(){
   int m;
   cin>>m;
   vector<vector<int>> vec;
   for(int i=0;i<m;i++)
   {   int x,y;
        cin>>x>>y;
      vector<int> v;
     v.push_back(x);
     v.push_back(x);
    vec.push_back(v);
   }
   int k;
   cin>>k;

vector<vector<int>> ans=kclosest(vec,k);
for(int i=0;i<ans.size();i++)
{
   for(int j=0;j<ans[i].size();j++)
   {
     cout<<ans[i][j]<<" ";
   }
   cout<<endl;
}
    return 0;
}