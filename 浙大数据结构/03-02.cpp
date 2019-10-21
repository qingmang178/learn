#include <iostream>
#include <string>
#include <vector>
#include <queue>


#define MaxTree 10
#define Tree int
#define ElementType int
#define Null -1
using namespace std;

Tree BuildTree(struct TreeNode T[]) ;
void LevelOrder(Tree BT);
Tree BuildTreeTest2(struct TreeNode T2[]);


struct TreeNode
{
	ElementType Element;
	Tree Left;
	Tree Right;
}T1[MaxTree];

int main()
{
	Tree R;
	R= BuildTree(T1);
	LevelOrder(R);
}

Tree BuildTree(struct TreeNode T[]) 
{
	int N;
	cin>>N;
	
	if(N==1)
	{
		cout<<0;

	}
	int Root=Null; 
	
	
	if(N)
	{
		char cl,cr;
		int check[N]={0};
		for (int i=0;i<N;i++)
		{
			T[i].Element=i; 
			cin>>cl>>cr;
			if(cl!='-'){
				T[i].Left=cl-'0';
				check[T[i].Left]=1;
			}
			else T[i].Left=Null;
			if(cr!='-'){
				T[i].Right=cr-'0';
				check[T[i].Right]=1;
			}
			else T[i].Right=Null;
		}
		int i;
		for(i=0;i<N;i++)
		{
			if(!check[i])
			break;
		}
		Root=i;
	}
	return Root;
}

void LevelOrder(Tree BT)
{
	queue<int> q;
	Tree R; 
	if(!BT) return;
	if(T1[BT].Left==-1&&T1[BT].Right==-1)
	{
		return;
	}
	q.push(BT);
	int flag=0;
	while(!q.empty())
	{
		R=q.front();
		
	    if(T1[R].Left==-1&&T1[R].Right==-1)
	    {
	    	if(flag)
		{
			cout<<" ";
		}
		else
		{
			flag=1;
		}
		cout<<T1[R].Element;
		}
	
		   
		q.pop();
		if(T1[R].Left!=-1)  q.push(T1[R].Left);
		if(T1[R].Right!=-1) q.push(T1[R].Right);
	}
	
}




////////////////////////////测试数据 
Tree BuildTreeTest2(struct TreeNode T2[])
{
    int N = 8;
    int check[N];
    char cl, cr;
    int Root;
 
    char input[N][2] = \
    {   {'1', '-'},\
        {'-', '-'},\
        {'0', '-'},\
        {'2', '7'},\
        {'-', '-'},\
        {'-', '-'},\
        {'5', '-'},\
        {'4', '6'},\
    };
 
    if(N){
        for(int i=0; i<N; i++)  check[i] = 0;
        for(int i=0; i<N; i++){
            T2[i].Element = i;
            cl = input[i][0];
            cr = input[i][1];
 
            if(cl != '-'){
                T2[i].Left = cl-'0';
                check[T2[i].Left] = 1;
            }
            else
                T2[i].Left = Null;
 
            if(cr != '-'){
                T2[i].Right = cr-'0';
                check[T2[i].Right] = 1;
            }
            else
                T2[i].Right = Null;
        }
        //找出根结点
        int i;
        for(i=0; i<N; i++){
            if(!check[i]) break;
        }
        Root = i;
    }
    return Root;
}

