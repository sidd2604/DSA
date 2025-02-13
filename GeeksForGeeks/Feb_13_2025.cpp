// https://www.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/

class Solution {
  public:
    void insert_values(Node* root, vector<int> &inorder){
        if(!root)
            return;
        insert_values(root->left, inorder);
        inorder.push_back(root->data);
        insert_values(root->right, inorder);
    }
    
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int> inorder;
        insert_values(root, inorder);
        
        int i = 0, j = inorder.size()-1;
        
        while(i<j){
            if(inorder[i]+inorder[j]==target)
                return true;
            if(inorder[i]+inorder[j]<target)
                i++;
            else
                j--;
        }
        
        return false;
        
    }
};