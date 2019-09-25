#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int num=0;

    //cout<<str.length();
    for(int i=str.length()-1;i>=0;i--)
    {
        if(str[i]!=' ')
            num++;
        else if(str[i]==' '&&i!=str.length()-1)
            break;
            
    }
   cout<<num;
}
