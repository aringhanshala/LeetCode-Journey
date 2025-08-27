// Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only.

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal
   Difficulty : Medium
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();     // Size of string
        int count = 0;     // Variable declaration

        // Start from end
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == ' ' && count > 0) break;  // word ended
            if(isalpha(s[i])) count++;           // count letters
        }

        return count;
    }
};
