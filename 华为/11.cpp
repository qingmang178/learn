#include<iostream>

using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a)
	{
	cout<<a%10;
	a=a/10;
    }
    return 0;
}  
