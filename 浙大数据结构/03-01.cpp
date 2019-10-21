#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MaxTree 10
#define ElementType char
#define Tree int
#define Null -1

Tree BuildTree(struct TreeNode T[]) ;
int Isomorphic(Tree R1,Tree R2);
Tree BuildTreeTest1(struct TreeNode T1[]);
Tree BuildTreeTest2(struct TreeNode T2[]);

struct TreeNode{
	ElementType Element;
	Tree Left;
	Tree Right;
	}T1[MaxTree],T2[MaxTree]; 
int main()
{
      Tree R1,R2;
	  
	  //R1=BuildTree(T1);
	  //R2=BuildTree(T2);
	  R1=BuildTreeTest1(T1);
	  R2=BuildTreeTest2(T2); 
	  if(Isomorphic(R1,R2))
	     cout<<"Yes"<<endl;
	  else
	     cout<<"No" <<endl;
}

Tree BuildTree(struct TreeNode T[]) 
{
	int N;
	cin>>N;
	int Root=Null; 
	if(N)
	{
		char cl,cr;
		int check[N]={0};
		for (int i=0;i<N;i++)
		{
			cin>>T[i].Element>>cl>>cr;
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
int Isomorphic(Tree R1,Tree R2)
{
	if((R1==Null)&&(R2==Null))
	{
	   cout<<"1.."<<endl;
	   return 1;
	   
    }
	if(((R1==Null)&&(R2!=Null))||((R1!=Null)&&(R2==Null)))
	{
	   cout<<"2.."<<endl;
	   return 0;
	   
    }
	if(T1[R1].Element!=T2[R2].Element)
	{
	   cout<<"3.."<<endl;	
	   return 0;
    }
	if((T1[R1].Left==Null)&&(T2[R2].Left==Null))
	{
	   cout<<"4.."<<endl;	
	   return Isomorphic(T1[R1].Right,T2[R2].Right);
    }
	if(((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&((T1[T1[R1].Left].Element)==(T2[T2[R2].Left].Element)))
	   
	   {
	   cout<<"5.."<<endl;
	   return (Isomorphic(T1[R1].Left,T2[R2].Left)&&Isomorphic(T1[R1].Right,T2[R2].Right));
	   }
	else
	{
	   cout<<"6.."<<endl;
	   return (Isomorphic(T1[R1].Left,T2[R2].Right)&&Isomorphic(T1[R1].Right,T2[R2].Left));
    }
}


Tree BuildTreeTest1(struct TreeNode T1[])
{
    int N = 8;
    int check[N];
    char cl, cr;
    int Root;
 
    char input[N][3] = \
    {   {'A', '1', '2'},\
        {'B', '3', '4'},\
        {'C', '5', '-'},\
        {'D', '-', '-'},\
        {'E', '6', '-'},\
        {'G', '7', '-'},\
        {'F', '-', '-'},\
        {'H', '-', '-'},\
    };
 
    if(N){
        for(int i=0; i<N; i++)  check[i] = 0;
        for(int i=0; i<N; i++){
            T1[i].Element = input[i][0];
            cl = input[i][1];
            cr = input[i][2];
 
            if(cl != '-'){
                T1[i].Left = cl-'0';
                check[T1[i].Left] = 1;
            }
            else
                T1[i].Left = Null;
 
            if(cr != '-'){
                T1[i].Right = cr-'0';
                check[T1[i].Right] = 1;
            }
            else
                T1[i].Right = Null;
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
 
Tree BuildTreeTest2(struct TreeNode T2[])
{
    int N = 8;
    int check[N];
    char cl, cr;
    int Root;
 
    char input[N][3] = \
    {   {'G', '-', '4'},\
        {'B', '7', '6'},\
        {'F', '-', '-'},\
        {'A', '5', '1'},\
        {'H', '-', '-'},\
        {'C', '0', '-'},\
        {'D', '-', '-'},\
        {'E', '2', '-'},\
    };
 
    if(N){
        for(int i=0; i<N; i++)  check[i] = 0;
        for(int i=0; i<N; i++){
            T2[i].Element = input[i][0];
            cl = input[i][1];
            cr = input[i][2];
 
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

