#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str,A;
    getline(cin,str);
    cin>>A;
    int num=0;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    transform(A.begin(),A.end(),A.begin(),::tolower);
    for(int i=0;i<str.length();i++)
    {
        

        if(str[i]==A[0])
            num++;
    }
    cout<<num;
}
