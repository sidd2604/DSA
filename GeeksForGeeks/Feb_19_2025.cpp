// https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/

class Solution {
  public:
    void create(priority_queue<int, vector<int>, greater<int>>& pq,
                Node* head) {
        if (pq.empty() == true) {
            return;
        }
        Node* naya = new Node(pq.top());
        pq.pop();
        head->next = naya;
        create(pq, naya);
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = arr.size();
        for (auto it : arr) {
            Node* head = it;
            Node* temp = head;
            while (temp != NULL) {

                pq.push(temp->data);
                temp = temp->next;
            }
        }
        if (pq.size() == 0) {
            return NULL;
        }
        if (pq.size() == 1) {
            Node* head = new Node(pq.top());
            pq.pop();
            return head;
        }
        Node* head = new Node(pq.top());
        pq.pop();

        create(pq, head);
        return head;
    }
};