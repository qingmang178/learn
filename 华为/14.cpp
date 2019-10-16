#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> a;
	while(n)
	{
		string temp;
		cin>>temp;
		a.push_back(temp);
		n--;
	}
     sort(a.begin(),a.end());
	/*for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<endl;
	}*/
	vector<string>::iterator ii;
	for(ii=a.begin();ii!=a.end();i++)
	{
		cout<<*ii<<endl;
	}
} 
