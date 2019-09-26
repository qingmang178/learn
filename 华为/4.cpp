#include <iostream>
#include <string>

using namespace std;
void f(string a);
int main()
{
    string a,b;
    cin>>a>>b; 
    f(a); 
    f(b);
}

void f(string a)
{
	int la=a.length();	 
	int j=0;
	for(int i=0;i<la;i++)
		{
			if(i%8==0&&i!=0)
			{
			cout<<endl<<a[i];
			j++;
		    }
			else
			cout<<a[i];
		}
		for(int i=la;i<(8*j+8);i++)
		    cout<<0;
		cout<<endl;
		    
}
