#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode* helper(vector<int>& nums,int start,int end)
{
    if(start>end) return NULL;
    int mid=(start+end)/2;
    TreeNode* root=new TreeNode(nums[mid]);
    root->left=helper(nums,start,mid-1);
    root->right=helper(nums,mid+1,end);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    if(nums.size()==0) return NULL;
    return helper(nums,0,nums.size()-1);
    }
int main()
{
    
    return 0;
}