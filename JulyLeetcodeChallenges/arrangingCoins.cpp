

// n = 5

// The coins can form the following rows:
// ¤
// ¤ ¤
// ¤ ¤

// Because the 3rd row is incomplete, we return 2.

// n = 8

// The coins can form the following rows:
// ¤
// ¤ ¤
// ¤ ¤ ¤
// ¤ ¤

// Because the 4th row is incomplete, we return 3.


//Method 1:

class Solution {
public:
    int arrangeCoins(int n) {        
        
        return (int)(sqrt(2 * (long)n + 0.25) - 0.5);
    }
};




//Method 2: 



class Solution {
public:
    int arrangeCoins(int n) {
         int i = 1;
         while(n>0){
            
             if(n>=i){
                 n-=i;
                 i++;
             }else{
                 break;
             }
            
         }
         return i-1;
        
        
    }
};
