// https://leetcode.com/problems/missing-number/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x,ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ans^=x;

	}
	 for(int i=0;i<=n;i++)
	{
		ans^=i;
		
	}
   cout<<ans;
	return 0;
}