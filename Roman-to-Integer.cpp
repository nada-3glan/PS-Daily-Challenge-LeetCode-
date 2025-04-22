class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int prev_val = 0;
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        

        for(int i =s.size()-1; i>=0; i--){
            int curr_val = mp[s[i]];
            if(curr_val < prev_val){
                result -= curr_val;
            }
            else{
                result += curr_val;
            }
            prev_val = curr_val;
          
        }
       return result; 
    }
};