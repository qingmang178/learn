#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	int count=0;
	cin>>n;
	vector<int> a;
	while(n)
	{
		int i;
		i=n%2;
		a.push_back(i);
		n=n/2;
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==1)
		count++;
	}
	cout<<count;

}
