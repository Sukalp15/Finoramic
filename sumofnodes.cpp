void printSum(TreeNode* curr_node, int sum, 
                            int curr_sum, vector<int> &path, vector<vector<int>> &ans)
{
    if(curr_node==NULL)
    return;
    
    curr_sum+=curr_node->val;
    path.push_back(curr_node->val);
    if(curr_sum==sum && curr_node->left==NULL && curr_node->right==NULL)
    {
        ans.push_back(path);
    }
    if(curr_node->left!=NULL)
    printSum(curr_node->left,sum,curr_sum,path,ans);
    if(curr_node->right!=NULL)
    printSum(curr_node->right,sum,curr_sum,path,ans);

    path.pop_back();
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) 
{
   vector<int> check;
   vector<vector<int>> ans;
   printSum(A,B,0,check,ans);
   return ans;
}
