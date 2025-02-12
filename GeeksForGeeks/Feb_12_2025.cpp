https://www.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/

class Solution {
  public:
  
    int kthSmallestRecur(Node* root, int &cnt, int k) {
    if (!root) return -1;
    
    int left = kthSmallestRecur(root->left, cnt, k);
    
    if (left != -1) return left;

    cnt++;

    if (cnt == k) return root->data;

    int right = kthSmallestRecur(root->right, cnt, k);
    return right;
}
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int k) {
        // add code here.
        int count = 0;
        return kthSmallestRecur(root, count, k);
    }
};