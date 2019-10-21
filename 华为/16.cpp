#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main()
{
	
	string input;
	while(cin>>input)
{
	pair<int,int> point(0,0);
	vector<string> vec;
	int count=0;
	for(int i=0;i<input.length();i++)
	{
		if(input[i]!=';')
		{
			count++;
			continue;
		}
		int flag=0;
		for(int j=0;j<input.substr(i-count,count).size();j++)
		if(input.substr(i-count,count)[j]>='0'&&input.substr(i-count,count)[j]<='9')
		{
	     flag=0;
	    }else
	    {
		flag=1;
		}
		
		if(flag==0)
		{
			vec.push_back(input.substr(i-count,count));
		}
		count=0;
	}
	 
	for(int i=0;i<vec.size();i++)
	{
		int n=0;
		char c=vec[i][0];
		for(int j=1;j<vec[i].size();j++)
		{
			n=n*10+(vec[i][j]-'0');
		}
		switch(c)
		{
			case 'A':{point.first-=n;break;}
			case 'D':{point.first+=n;break;}
			case 'W':{point.second+=n;break;}
			case 'S':{point.second-=n;break;}
			
		}
	}
	cout<<point.first<<','<<point.second<<endl;
 }
 return 0;
}
 
