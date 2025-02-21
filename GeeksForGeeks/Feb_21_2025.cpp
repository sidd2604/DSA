// https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(char &ch : s){
            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if(st.empty()) return false;
                if((st.top() == '(' && ch == ')') || 
                   (st.top() == '[' && ch == ']') || 
                   (st.top() == '{' && ch == '}')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};