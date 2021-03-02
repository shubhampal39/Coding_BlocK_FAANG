#include<bits/stdc++.h>
using namespace std;

bool can_place(int num,int mat[9][9],int n,int i,int j) {
     int p=n;
    for(int k=0;k<p;k++)
    {
        if(mat[i][k]==num|| mat[k][j]==num==num){
            return true;
        }
        int row =(i/3)*3 ,cal=(j/3)*3;
        for(int k=row;k<row+3;k++))
        {
            for(int m=cal;m<cal+3;cal++){
                if(mat[k][m]==num)
                    return false;
            }
        }
    }
    return true;
}

bool sodukuSolver(int mat[9][9],int n,int i,int j)
{
    if(j==9) return sodukuSolver(mat,n,i+1,0);
    if(i==0) return true;

if(mat[i][j]==0){
    for(int num=0;num<n;num++)
    {
        if(can_place(num,mat,n,i,j))
         {
             mat[i][j] =num;
         }
         bool can_solve_soduku=sodukuSolver(mat,n,i,j++);
         if(can_solve_soduku) return true;
         mat[i][j] = 0;
    }
}

}

int main()
{
  int n;
  cin>>n;
  int arr[9][9];

  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    sodukuSolver(arr,n,0,0);
  
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
    }

}