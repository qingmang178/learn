#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	vector<int> a;
	getline(cin,s);
	int count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
		count++;
		a.push_back(i);
	    }
    }
    while(count)
    {    
	     cout<<s.substr(a[count-1]+1,a[count]-a[count-1]-1)<<" ";
		 count--;    
    }
	cout<<s.substr(0,a[0])<<endl;
	return 0;
}
