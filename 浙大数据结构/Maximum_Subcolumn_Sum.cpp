#include<stdio.h>
#include<iostream>

using namespace std;

int MaxSubseqSum1(int A[],int N)
{
	/*O(N^3)*/ 
	int ThisSum,MaxSum=0;
	int i,j,k;
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			ThisSum=0;
			for(k=i;k<=j;k++)
			ThisSum+=A[k];
		
		    if(ThisSum>MaxSum)
		    MaxSum=ThisSum;
		}
	}
	return MaxSum;
}

int MaxSubseqSum2(int A[],int N)
{
	/*o(n^2)*/
	int ThisSum,MaxSum=0;
	int i,j;
	int i_indice,j_indice;
	for(i=0;i<N;i++){
		ThisSum=0;
		for(j=i;j<N;j++){

		    ThisSum+=A[j];
		    if(ThisSum>MaxSum)
		    {
			MaxSum=ThisSum;
			i_indice=i;j_indice=j;
		    } 
		}
	}
	cout<<MaxSum<<" "<<i_indice<<" "<<j_indice;
	return MaxSum;
}
int MaxSubseqSum3(int A[],int N)
{
	/*分治*/
}
int MaxSubseqSum4(int A[],int N)
{
	/*在线处理*/
	 int ThisSum,MaxSum=0;
	 int i;
	 for(i=0;i<N;i++)
	 {
	 	ThisSum+=A[i];/*向右累加*/
	 	if(ThisSum>MaxSum)
	 	   MaxSum=ThisSum;/*发现更大则更新当前结果*/
	 	else if(ThisSum<0)/*如果当前子列和为负*/
	 	   ThisSum=0;/*则不可能使后面的部分和增大*/
	 }
	 return MaxSum;
	  
} 
int MaxSubseqSum5(int A[],int N)
{
	/*在线处理*/
	 int ThisSum,MaxSum=-0x3f3f3f3f;
	 int i_indice=0,j_indice=0,ii=0;
	 for(int i=0;i<N;i++)
	 {

	 	ThisSum+=A[i];/*向右累加*/
	 	if(ThisSum<0)
	 	{
	 	ThisSum=0;
		 ii=i+1;
		}
	 	else if(ThisSum>MaxSum)
	 	{
	 	   MaxSum=ThisSum;/*发现更大则更新当前结果*/
	 	   i_indice=ii;
	 	   j_indice =i;
	  
	    }
	
	 
    } 
	if(MaxSum<0)
	 {
	 cout<<0<<" "<<A[0]<<" "<<A[N-1];	
	 } 
	 else{
	 cout<<MaxSum<<" "<<A[i_indice]<<" "<<A[j_indice];
	}
	 return 0;
   
	  
} 
int main()
{
	int k,Max;
	cin>>k;
	int a[k];
	for(int i=0;i<k;i++)
	cin>>a[i];
	Max=MaxSubseqSum5(a,k);
	
    
} 


/*
//正确代码 
#include <stdio.h>
#define maxn 10005
#define INF 0x3f3f3f3f
int a[maxn];
int n;
void f() {
    int lsLeft=0, right=0, left=0;//lsLeft为临时左下标，left为最大子序列最左边下标，right为最右边下标
    int ThisSum=0, MaxSum=-INF;//首先ThisSum代表临时子列和，MaxSum为最大子列和
    for (int i = 0; i < n; i++) {
        ThisSum += a[i];
        if (ThisSum < 0) {
            ThisSum = 0;
            lsLeft = i+1;//更新临时下标
        }
        else if (ThisSum > MaxSum) {
            MaxSum = ThisSum;
            left = lsLeft;//更新左下标
            right = i;//右下标
        }
    }
    if (MaxSum < 0) {
        printf("0 %d %d", a[0], a[n-1]);
    }
    else {
        printf("%d %d %d", MaxSum, a[left], a[right]);
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    f();
    return 0;
}



*/
