#include <iostream>

using namespace std;

#define MAXN 1001
#define MINH -10001 

int H[MAXN],size;

void Create()
{
	size=0;
	H[0]= MINH;
}

void Insert(int X)
{
int i;
for(i=++size;H[i/2]>X;i/=2)
        H[i]=H[i/2];
H[i]=X; 
}

int main()
{
	int n,m;
	Create();
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		Insert(x);
	}
    for(int j=0;j<m;j++)
    {
    	int y;
    	cin>>y;
    	cout<<H[y];
    	while(y>1)
    	{
    		y/=2;
    		cout<<" "<<H[y];
		}
		cout<<endl;
	}
	return 0;
}


