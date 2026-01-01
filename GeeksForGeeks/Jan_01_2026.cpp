// https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1


class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        set<Node*> set;
        Node* curr = head1;
        while(curr){
            set.insert(curr);
            curr = curr->next;
        }
        
        curr = head2;
        
        while(curr){
            if(set.find(curr) != set.end()){
                return curr;
            }
            curr = curr->next;
        }
    }
};