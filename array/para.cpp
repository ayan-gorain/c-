class Solution {
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x) {
        stack<char> st;
        
        for (char c : x) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false; // Unmatched closing bracket
                }
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                    return false; // Mismatched brackets
                }
            }
        }
        
        // If the stack is empty, all brackets are matched
        return st.empty();
    }
};