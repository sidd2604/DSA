// https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/

class FindElements {
public:
    unordered_set<int> set;
    void construct(TreeNode* root, int x){
        if(!root)
            return ;
        root->val = x;
        set.insert(x);
        construct(root->left, 2*x+1);
        construct(root->right, 2*x+2);
    }
    FindElements(TreeNode* root) {
        construct(root, 0);
    }
    
    bool find(int target) {
        if(set.find(target)!=set.end())
            return true;
        return false;
    }
};