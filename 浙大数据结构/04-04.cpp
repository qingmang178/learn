#include <iostream>  
#include <string>

using namespace std;

typedef struct TreeNode *Tree;

struct TreeNode{
	int v;
	Tree Left,Right;
	int flag;
};



Tree MakeTree(int N);
Tree Insert(Tree T,int V);
Tree NewNode(int V);
int check(Tree T,int V);
int Judge(Tree T, int N);
void Resert(Tree T);
void FreeTree(Tree T);







int main()
{
	int N,L,i;
	Tree T;
	cin>>N;
	while(N)
	{

		cin>>L;
		T=MakeTree(N);
		for(i=0;i<L;i++)
		{
			if(Judge(T,N)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			Resert(T);
		}
		FreeTree(T);
		cin>>N;
	}
	return 0; 
}

Tree MakeTree(int N)
{
	Tree T;
	int i,V;
	cin>>V;
	T= NewNode(V);
	for(i=1;i<N;i++)
	{
		cin>>V;
		T=Insert(T,V); 
	}
	return T;
}

Tree Insert(Tree T,int V)
{
	if(!T) T=NewNode(V);
	else
	{
		if(V>T->v)
		T->Right=Insert(T->Right,V);
		else
		T->Left=Insert(T->Left,V);
	}
	return T;
}

Tree NewNode(int V)
{
	Tree T=(Tree)malloc(sizeof(struct TreeNode));
	T->v=V;
	T->Left=T->Right=NULL;
	T->flag=0;
	return 0;
}

int check(Tree T,int V)
{
	if(T->flag)
	{
		if(V<T->v) return check(T->Left,V);
		else if(V>T->v) return check(T->Right,V);
		else return 0;
	}
	else
	{
		if(V==T->v){
			T->flag=1;
			return 1;
		}
		else return 0;
	}
}
int Judge(Tree T, int N)
{
	int i,V,flag=0;
	cin>>V;
	if(V!=T->v) flag=1;
	else T->flag=1;
	for(i=1;i<N;i++)
	{
		cin>>V;
		if((!flag)&&(!check(T,V))) flag=1;
	}
	if(flag) return 0;
	else return 1;
}

void Resert(Tree T)
{
	if(T->Left) Resert(T->Left);
	if(T->Right) Resert(T->Right);
	T->flag=0;
}

void FreeTree(Tree T)
{
	if(T->Left) FreeTree(T->Left);
	if(T->Right) FreeTree(T->Right);
	free(T);
}
