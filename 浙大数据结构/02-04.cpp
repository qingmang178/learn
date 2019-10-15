#include <iostream>
#include <stack>
#include <vector> 
using namespace std;

int main()
{
	int M,N,K;
	cin>>M>>N>>K;
	
	
	while(K--)
	{
	    stack<int> a;
		vector<int> b(N,0);
		for(int i=0;i<N;i++)
		{
          cin>>b[i];
		}
			
	
	int p=0, num=1,flag=0;
	while(p<N)
	{
		if(a.empty())
		{
			a.push(num);
			num++;
		}else
		{
			if(a.top()==b[p]){
				a.pop();
				p++;
			}else if(a.top()<b[p]){
				if(a.size()==N){
					flag==1;
					break;
					
				}else{
					a.push(num);
					num++;
				}
			}else{
				flag=1;
				break;
			}
				
		}
		if(flag)
		    cout<<"NO"<<endl;
		else
		    cout<<"YES"<<endl;
	}
	return 0;	
   }	
} 
