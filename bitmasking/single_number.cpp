// https://leetcode.com/problems/single-number/
#include<iostream>
using namespace std;
int main() {
	int n,ans=0,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ans^=x;
	}
	cout<<ans;
	return 0;
}