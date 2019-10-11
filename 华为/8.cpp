#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXSIZE 10005

struct node
{
	int value;
} node[MAXSIZE];
int main()
{
	int num,key,value;
	cin>>num;
	for(int i=0;i<num;i++)
	
	
	
	{
		cin>>key>>value;

		node[key].value+=value;
	}
	for(int i=0;i<MAXSIZE;i++)
	{
		if(node[i].value!=0)//题目中说明了value的值为int类型的整数。 
		cout<<i<<" "<<node[i].value<<endl;
	}
	
	
}

