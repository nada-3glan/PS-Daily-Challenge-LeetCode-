class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int>mp;
        int cntr =0;
        for(int i = 0; i< answers.size(); i++){
            mp[answers[i]]++;
        }

        for(auto const& [key, value] : mp){
            cntr += ceil((double)value / (key + 1)) * (key + 1);
        }
        return cntr;
    }

};