#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Print(vector<int> a);
vector<int> Sum(vector<int> a,vector<int> b);
vector<int> Multi(vector<int> a,vector<int> b);
int main()
{
    vector<int>a,b,sum,mult;

    int a_length,b_length;
    cin>>a_length;
    for(int i = 0;i < a_length*2; i++)
       {
    	  int temp;
    	  cin>>temp;
    	  a.push_back(temp);
	   }
	cin>>b_length;
	for(int i = 0;i < b_length*2; i++)
       {
    	  int temp;
    	  cin>>temp;
    	  b.push_back(temp);
	   }
	sum=Sum(a,b);
	mult=Multi(a,b);
	Print(mult);
	cout<<endl; 
	Print(sum); 
} 





//打印函数 
void Print(vector<int> a)
{
	if(a.size()==0)
	{
		cout<<"0"<<" "<<" 0";
	}
	else
	{
		int flag=0;
	    for(int i=0;i<a.size();i++)//size()容器中实际数据个数 
        {
        	if(flag==0)
        	{
        		flag=1;
			}
            else
            {
            	cout<<" ";
			}
			cout<<a[i];
        }	
    }
}
vector<int> Sum(vector<int> a,vector<int> b)
{
	vector<int> c;
	int a1=a.size();
	int b1=b.size();
	int i,j=0;
	while(i<a1/2&&j<b1/2)
	{
		if(a[i*2+1]>b[j*2+1]){
			c.push_back(a[i*2]);
			c.push_back(a[i*2+1]);
			i++;
		}
		else if(a[i*2+1]<b[j*2+1]){
			c.push_back(b[j*2]);
			c.push_back(b[j*2+1]);
			j++;
		}
		else{
			if((a[i*2]+b[j*2])!=0)
			{
				c.push_back(a[i*2]+b[j*2]);
				c.push_back(a[i*2+1]);
				i++;
				j++;
			}
		}
	}
	if(i==a1/2)
	{
		for(int num=j*2;num<b1;num++)
		    c.push_back(b[num]);
	}
	else{
		for(int num=i*2;num<a1;num++)
		    c.push_back(a[num]);
		
	}
	return c;
	
}
vector<int> Multi(vector<int> a,vector<int> b)
{
	vector<int> c;

	int l1=a.size();
	int l2=b.size();
	for(int i=0;i<l1/2;i++)
	{	vector<int> b1;
		for(int j=0;j<l2/2;j++)
		{
		b1.push_back(a[i*2]*b[j*2]);
		b1.push_back(a[i*2+1]+b[j*2+1]);
		}
		c=Sum(c,b1);
	}
	return c;
}

//输出错误 
