// element that appears more than n/3 times/
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int count1=0,element1,count2=0,element2;
    for(int i=0;i<n;i++)
    {
     if(count1==0)
     {element1=a[i]; count1++; }
      
     else if(a[i]==element1)
     {  count1++;}
      else if(count2==0)
     {element2=a[i];count2++; } 
    else if(a[i]==element2)
      { count2++;  }
     else{
             count1--;
             count2--;
         }
     }    
    
    cout<<element2<<element1<<endl;

     count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==element1)
        {
            count1++;
        }
        if(a[i]==element2)
        {
            count2++;
        }
    }

    count1>n/3?cout<<element1:cout<<"element not fount"<<endl;
    count2>n/3?cout<<element2:cout<<"element not fount"<<endl;

  return 0;
}