#include <stdio.h>
//ÐÞ¸ÄÒ»ÏÂ 

int BinarySearch(int list[],int N,int X,int l,int r)
{
 int m=(l+r)/2;
 if(list[m]==X)
 return m;
 else if(list[m]>X)
 {
 	r=m;
 	BinarySearch(list,N,X,l,r);
 }
 else
 {
 	l=m;
 	BinarySearch(list,N,X,l,r);
 }	 
}
int main()
{
	int a[]={1,2,3,4,5,7,9,11};
	int p;
	p=BinarySearch(a,8,7,0,7);
	printf("%d",p);
}
