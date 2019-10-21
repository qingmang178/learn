#include <iostream>
#include <string>
#include <vector>

using namespace std;
int fun(string a);
vector<int> push(string str1);
bool judge(int a);
string test=("192.168.0.1~1.123.234.255"); 
int main()
{
	string str;
	//cin>>str;
	str=test;
	int count=str.find("~");
    string str1=str.substr(0,count);
    string str2=str.substr(count+1,str.length()-count);
    vector <int> a;
    vector <int> b;
    
    a=push(str1);
    b=push(str2);
	int A=0,B=0,C=0,D=0,E=0,ERROR=0,IP=0;
   if(b[0]==255)
     
	 
}
int fun(string a)
{
	int n;
	for(int i=0;i<a.length();i++)
	{
		n=n*10+(a[i]-'0');
	}
	return n;
}
vector<int> push(string str1)
{
	vector<int> a;
	int t=0;
    for(int i=0;i<str1.length();i++)
    {
    	if(str1[i]!='.')
    	{
    		t++;
    		continue;
    	}
    	a.push_back(fun(str1.substr(i-t,t)));
    	t=0;
	}
	a.push_back(fun(str1.substr(str1.rfind(".")+1,str1.length()-str1.rfind("."))));
	return a;
}
bool judge(int a)
{
	if(a==128||a==192||a==224||a==240||a==248||a==252||a==254)
	{
		return true;
	}else
	{
		return false;
	}
}

vector <string> trans(vector int a)
{
	a.
}
