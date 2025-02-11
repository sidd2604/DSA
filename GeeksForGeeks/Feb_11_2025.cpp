// https://www.geeksforgeeks.org/problems/check-for-bst/1

lass Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        
        return valid(root, LONG_LONG_MAX, LONG_LONG_MIN);
        
    }
    
    bool valid(Node* root, long long maxi, long long mini){
        if(!root)
            return true;
        if(root->data >= maxi || root->data <= mini)
            return false;
        return valid(root->left, root->data, mini) && valid(root->right, maxi, root->data);
    }
};