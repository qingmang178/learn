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
	/*����*/
}
int MaxSubseqSum4(int A[],int N)
{
	/*���ߴ���*/
	 int ThisSum,MaxSum=0;
	 int i;
	 for(i=0;i<N;i++)
	 {
	 	ThisSum+=A[i];/*�����ۼ�*/
	 	if(ThisSum>MaxSum)
	 	   MaxSum=ThisSum;/*���ָ�������µ�ǰ���*/
	 	else if(ThisSum<0)/*�����ǰ���к�Ϊ��*/
	 	   ThisSum=0;/*�򲻿���ʹ����Ĳ��ֺ�����*/
	 }
	 return MaxSum;
	  
} 
int MaxSubseqSum5(int A[],int N)
{
	/*���ߴ���*/
	 int ThisSum,MaxSum=-0x3f3f3f3f;
	 int i_indice=0,j_indice=0,ii=0;
	 for(int i=0;i<N;i++)
	 {

	 	ThisSum+=A[i];/*�����ۼ�*/
	 	if(ThisSum<0)
	 	{
	 	ThisSum=0;
		 ii=i+1;
		}
	 	else if(ThisSum>MaxSum)
	 	{
	 	   MaxSum=ThisSum;/*���ָ�������µ�ǰ���*/
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
//��ȷ���� 
#include <stdio.h>
#define maxn 10005
#define INF 0x3f3f3f3f
int a[maxn];
int n;
void f() {
    int lsLeft=0, right=0, left=0;//lsLeftΪ��ʱ���±꣬leftΪ���������������±꣬rightΪ���ұ��±�
    int ThisSum=0, MaxSum=-INF;//����ThisSum������ʱ���кͣ�MaxSumΪ������к�
    for (int i = 0; i < n; i++) {
        ThisSum += a[i];
        if (ThisSum < 0) {
            ThisSum = 0;
            lsLeft = i+1;//������ʱ�±�
        }
        else if (ThisSum > MaxSum) {
            MaxSum = ThisSum;
            left = lsLeft;//�������±�
            right = i;//���±�
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
