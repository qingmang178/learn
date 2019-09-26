#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h>
 
using namespace std;
int main()
{
	string num_16;
	
	while(cin>>num_16)
	{
	int l=num_16.length();
	int num_10=0;
	for(int i=2;i<l;i++)
	{
	    if(isalpha(num_16[i]))
	   {
	   	    num_10+=(((int) num_16[i])-55)*(pow(16,(l-i-1)));
	   }
	   else if(isdigit(num_16[i]))

	        num_10+= (((int) num_16[i])-48)*(pow(16,(l-i-1)));
   }
   
   cout<<num_10<<endl;
  }
	    
}
