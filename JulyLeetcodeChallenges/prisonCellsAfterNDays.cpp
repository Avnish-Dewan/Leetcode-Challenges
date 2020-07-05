
// Input: cells = [0,1,0,1,1,0,0,1], N = 7
// Output: [0,0,1,1,0,0,0,0]
// Explanation: 
// The following table summarizes the state of the prison on each day:
// Day 0: [0, 1, 0, 1, 1, 0, 0, 1]
// Day 1: [0, 1, 1, 0, 0, 0, 0, 0]
// Day 2: [0, 0, 0, 0, 1, 1, 1, 0]
// Day 3: [0, 1, 1, 0, 0, 1, 0, 0]
// Day 4: [0, 0, 0, 0, 0, 1, 0, 0]
// Day 5: [0, 1, 1, 1, 0, 1, 0, 0]
// Day 6: [0, 0, 1, 0, 1, 1, 0, 0]
// Day 7: [0, 0, 1, 1, 0, 0, 0, 0]


// Input: cells = [1,0,0,1,0,0,1,0], N = 1000000000
// Output: [0,0,1,1,1,1,1,0]


class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        
      map <int, vector <int> > m;
      if(N == 0) return cells;
      set <vector <int> > visited;
      visited.insert(cells);
      for(int i = 1; i<=14 ; i++ ){
         vector <int> temp(8);
         for(int j = 1; j < 7; j++){
            if(cells[j - 1] ^ cells[j + 1] == 0){
               temp[j] = 1;
            }
         }
         cells = temp;
         m[i] = temp;
         visited.insert(temp);
      }
      return m[N % 14 == 0? 14 : N % 14];
    }
};
