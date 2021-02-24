#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	string s;
	cin>>s;
  int odd=0,even=0;
  int n=s.length();
	for(int i=0;i<n;i++)
	{
		if((i%2)==0 && s[i]=='1')
		{
			even++;
		}
		else if(s[i]=='1' && (i%2)==1)
		{
			odd++;
		}
	}

//  if((2*(odd)+even)%3)==0) 
//  cout<<'1';
//  else cout<<"0";

	if(abs(odd-even)%3==0)
	{
		cout<<'1'<<endl;
	}
	else{
		cout<<'0'<<endl;
	}
    }
	return 0;
}