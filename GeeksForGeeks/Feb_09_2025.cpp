// https://www.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1/

class Solution {
  public:
  int solution(Node* root, int &ans){
        if(!root) return 0;
        int leftsum = solution(root->left, ans);
        int rightsum = solution(root->right, ans);

        if(leftsum>0 && rightsum>0) ans = max(ans, root->data+leftsum+rightsum);
        else if(leftsum<0 && rightsum<0) ans = max(ans, root->data);
        else ans = max(ans, root->data + max(leftsum, rightsum));

        return max(0, root->data + max(leftsum, rightsum));
    }
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) {
        // code here
        int ans = INT_MIN;
        solution(root, ans);
        return ans;
    }
};