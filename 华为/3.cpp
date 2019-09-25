#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n,temp;
    
    
    while(cin>>n)
    {
        vector<int> inputArray;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        inputArray.push_back(temp);
    }
    sort(inputArray.begin(),inputArray.end());   
    inputArray.erase(unique(inputArray.begin(), inputArray.end()), inputArray.end());//去重
    for(int i=0;i<inputArray.size();i++)
        cout<<inputArray[i]<<endl;
   }
    return 0;
}
