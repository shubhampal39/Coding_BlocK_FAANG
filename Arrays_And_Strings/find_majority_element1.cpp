// element that appears more than n/2 times/
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
   int count=0,element;

    for(int i=0;i<n;i++)
    {
     if(count==0)
        {element=a[i]; count++; }
     else
     {
         if(a[i]==element)
         {
             count++;
         }
         else{
             count--;
         }
     }          
    }
    // for 1 2 3 4 5 we need to check
    count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            count++;
        }
    }

   if(count>n/2)
         cout<<element;
    else
         cout<<"No element found";

    return 0;
}