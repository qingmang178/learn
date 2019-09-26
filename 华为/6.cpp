#include <iostream>
#include <string>

using namespace std;

int main()
{
	long num;
	cin>>num;
	if(num==1)
	   cout<<num<<" ";
	else{
		for(int i=2;i<=num;i++){
			while(num%i==0){
				cout<<i<<" ";
				num/=i;
			}
		}
	}
       
} 
