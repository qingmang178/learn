#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;	
	vector<int> a;
	cin>>num;
	while(num>0)
	{
		a.push_back(num%10);
		num=num/10;
	}
	for(int i=0;i<a.size();i++)
	{
		for(int j=i+1;j<a.size();j++)
		{
			if(a[i]==-1)
			{
				
			}
			else
			{
			if(a[j]==a[i])
			   a[j]=-1;
			}
				
		}
	}

     for(int i=0;i<a.size();i++)
     {
     	if(a[i]!=-1)
     	cout<<a[i];
	 }

}
