#include <iostream>

using namespace std;

int main()
{
	char ch;
	int a[128]={0};
	int count=0;
	while(cin>>ch)
	{
		if(ch>=0&&ch<=127)
		{
			a[ch]++;
		}
	}
	for(int i=0;i<128;i++)
	{
		if(a[i]>0)
		count++;
	}
	cout<<count;
}
