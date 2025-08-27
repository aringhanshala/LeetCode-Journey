/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
   An input string is valid if:

   1. Open brackets must be closed by the same type of brackets.
   2. Open brackets must be closed in the correct order.
   3. Every close bracket has a corresponding open bracket of the same type.
*/

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal 
   Difficulty : Medium
*/

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();     // Size of string
        stack<char> st;     // Stack declaration

        // Traversing in the string
        for(int i = 0; i < n; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if(st.empty()) return false;

                char top = st.top();
                st.pop();
                if(s[i] == ')' && top != '(') return false;
                if(s[i] == '}' && top != '{') return false;
                if(s[i] == ']' && top != '[') return false;
            }
        }
        return st.empty();     // Will return 1 if it is empty else 0
    }
};
