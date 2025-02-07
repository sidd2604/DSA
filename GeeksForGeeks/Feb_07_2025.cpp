// https://www.geeksforgeeks.org/problems/inorder-traversal/1

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        solution(root, ans);
        return ans;
    }
    void solution(Node* root, vector<int> &ans){
        if(!root)
            return;
        if(root->left)
            solution(root->left, ans);
        ans.push_back(root->data);
        if(root->right)
            solution(root->right, ans);
    }
};