#include <iostream>
#include <string>
#include <vector>

using namespace std; 
int main()
{
	string str;
	
	while(cin>>str)
	{
	int flag=1;
	int count=0;
	vector <int> a(4,0);
	if(str.length()<8)
	   flag=0;
	else
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
			   a[0]++;	
			}
			else if((str[i]>='a'&&str[i]<='z'))
			{
			   a[1]++; 
			}else if((str[i]>='A'&&str[i]<='Z')){
			   a[2]++;
			}else
			{
				a[3]++;
			}
		}
		for(int i=0;i<4;i++)
		{
			if(a[i]!=0)
			count++;
			
		}
		if(count<3)
		flag=0;
		
		for(int i=0;i<str.length()-6;i++)
		    for(int j=i+3;j<str.length()-3;j++)
		    {
		    	if(str[i] == str[j] && str[i + 1] == str[j + 1] && str[i + 2] == str[j + 2])
		    	flag=0;
			}
		
		
	}
	
	
	if(flag)
	{
		cout<<"OK"<<endl;
    }else
	cout<<"NG"<<endl; 
   }
   return 0;
}
