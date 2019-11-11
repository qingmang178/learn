#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std; 

struct TreeNode {
    int val;
     TreeNode *left;
      TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int vinlen=vin.size(); 
        if(vinlen==0)
            return NULL;
        vector <int> left_pre,right_pre,left_in,right_in;
        TreeNode *head =new TreeNode(pre[0]);
        int root=0;
        for(int i=0;i<vinlen;i++)
        {
            if(vin[i]==pre[0])
            {
                root=i;
                break;
            }
        }
        for(int i=0;i<root;i++)
        {
            left_in.push_back(vin[i]);
            left_pre.push_back(pre[i+1]);
        }
        for(int i=root+1;i<vinlen;i++)
        {
            right_in.push_back(vin[i]);
            right_pre.push_back(pre[i]);
        }
        head->left=reConstructBinaryTree(left_pre,left_in);
        head->right=reConstructBinaryTree(right_pre,right_in);
        return head;

    }
};
//先序遍历 
void preTransTree(TreeNode * tree)
{
	if(tree)
	{
		cout<<tree->val<<endl;
		preTransTree(tree->left);
		preTransTree(tree->right);
	}
}
//中序遍历 
void inTransTree(TreeNode * tree)
{
	if(tree)
	{
	    inTransTree(tree->left);
		cout<<tree->val<<endl;
		inTransTree(tree->right);
	}
}
//后序遍历 
vector <int> PostTree; 
void postTransTree(TreeNode*  tree)
{
	
		if(tree)
	{
	    postTransTree(tree->left);
	
		postTransTree(tree->right);
		PostTree.push_back(tree->val);
	}
	
}
//层次遍历 



int main()
{
	Solution solu;
	TreeNode *head;
	vector<int> pre;
	vector<int> vin;
	//vector<int> pre={1,2,4,7,3,5,6,8};
	//vector<int> vin={4,7,2,1,5,3,8,6};
    stack<int> s;	
	int N;
	cin>>N;
	for(int i=0;i<N*2;i++)
	{
		string str; int tmp;
        cin >> str;
        if (str == "Push") {
            cin >> tmp;
            //preOrder[preL++] = tmp;
            //st.push(tmp);
            s.push(tmp);
            pre.push_back(tmp);
        } else if (str == "Pop") {
            vin.push_back(s.top());
            s.pop();
        }
    }

	head=solu.reConstructBinaryTree(pre,vin);
	postTransTree(head);
	for(int i=0;i<PostTree.size()-1;i++)
	{
		cout<<PostTree[i]<<" ";
	}
	cout<<PostTree[N-1]<<endl;
	return 0;
}
