

// Input: [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.



// Input: [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size(); 

        digits[n-1] += 1; 
        int carry = digits[n-1]/10; 
        digits[n-1] = digits[n-1] % 10; 

        for (int i=n-2; i>=0; i--) 
        { 
            if (carry == 1) 
            { 
               digits[i] += 1; 
               carry = digits[i]/10; 
               digits[i] = digits[i] % 10; 
            } 
        } 
        
        if (carry == 1) {
            digits.insert(digits.begin(), 1); 
        }
        return digits;
    }
};
