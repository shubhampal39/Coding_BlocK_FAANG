#include<bits/stdc++.h>
using namespace std;
char a[10000];
vector<int> v;

class node{
    int data;
    node *left, *right;
    node(int i)
    {
        data=i;
        left=right=NULL;
    }

}

void StringToInt()
{
      char *ans=strtok(a," ");
      while(ans!=NULL){
          v.push_back(stoi(ans));
          ans=strtok(NULL," ");
      }

      for(int i=0;i<v.size();i++)
      {
          cout<<v[i]<<" ";
      }
}
//create tree in level order
node * CreateTree(){
    if(strlen(a)==0|| v.size()==0) return NULL;

    int no=v[0];
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin.ignore(); //we ignore space 
        cin.getline(a,1000);
        StringToInt();
        node* root=CreateTree();
    }
}