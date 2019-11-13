#include <iostream>
#include <algorithm>
using namespace std;

void InOrder(int i);
int a[1005];
int b[1005];
int n=1;
int pos=1;

int main()
{
	cin>>n;


	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	InOrder(1);
	for(int i=1;i<=n;i++)
	{
		cout<<b[i];
		if(i!=n)
		cout<<" ";
	}
	cout<<endl;
	
} 
void InOrder(int i)
{
	if(i*2<=n) InOrder(i*2);
	b[i]=a[pos++];
	if(i*2+1<=n) InOrder(i*2+1);
}
