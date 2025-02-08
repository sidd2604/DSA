// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
  public:
    bool isLeaf(Node* root){
        if(!root->left && !root->right){
            return true;
        }
        return false;
    }
    
    void addLeft(Node* root, vector<int> &ans){
        Node* curr = root->left;
        while(curr){
            if(!isLeaf(curr)) ans.push_back(curr->data);
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    
    void addLeaf(Node* root, vector<int> &ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        if(root->left) addLeaf(root->left, ans);
        if(root->right) addLeaf(root->right, ans);
    }
    
    void addRight(Node* root, vector<int> &ans){
        vector<int> temp;
        Node* curr = root->right;
        
        while(curr){
            if(!isLeaf(curr)) temp.push_back(curr->data);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        
        int n = temp.size();
        for(int i=n-1; i>=0; i--){
            ans.push_back(temp[i]);
        }
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(!root) return ans;
        
        if(!isLeaf(root)) ans.push_back(root->data);
        
        addLeft(root, ans);
        addLeaf(root, ans);
        addRight(root, ans);
        
        return ans;
    }
};