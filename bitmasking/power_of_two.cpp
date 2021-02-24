https://leetcode.com/problems/power-of-two/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n=t>>1;
    if(t&n)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
 return 0;

}