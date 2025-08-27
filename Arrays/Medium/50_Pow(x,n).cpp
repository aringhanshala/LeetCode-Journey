// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

/* Time Complexity  : O(log n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal
   Difficulty : Medium
*/

class Solution {
public:
    double myPow(double x, int n) {
        // Edge cases
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

        long binForm= n;     // Variable declaration
        // Changing value of x for negative values
        if(n<0){
            x= 1/x;
            binForm= -binForm;
        }
        double ans= 1;     / Variable declaration

        // Traversing (2^3= 2*2*2)
        while(binForm > 0){
            if(binForm % 2 == 1) ans *= x;

            x *= x;
            binForm /= 2;
        }

        return ans;     // Returning answer
    }
};
