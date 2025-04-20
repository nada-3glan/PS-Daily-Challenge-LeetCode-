class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        /*
        //map solution
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto const& pair:mp){
            if(pair.second == 1)
                result = pair.first;
        }
        return result;*/

        // XOR Solution
        for(int i=0; i<nums.size(); i++){
            result = result ^ nums[i];
        }
        return result;

    }
};