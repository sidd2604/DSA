// https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1

class Solution {
    public:
      stack<int> s;
      stack<int> minStack;
      Solution() {
          // no code needed
      }
  
      // Add an element to the top of Stack
      void push(int x) {
          // code here
          s.push(x);
          if(minStack.empty() || x<=minStack.top()){
              minStack.push(x);
          }
      }
  
      // Remove the top element from the Stack
      void pop() {
          // code here
          if (s.empty()) return;
          if (s.top() == minStack.top()) {
              minStack.pop(); 
          }
          s.pop();
      }
  
      // Returns top element of the Stack
      int peek() {
          // code here
          return s.empty() ? -1 : s.top();
          
      }
  
      // Finds minimum element of Stack
      int getMin() {
          // code here
          return minStack.empty() ? -1 : minStack.top();
      }
  };