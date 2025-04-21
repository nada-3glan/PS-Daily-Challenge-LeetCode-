class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int result=0;
        int insert_pos = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == target){
                result = i;
                break;
            }
            else if(target > nums[i]){
                insert_pos = i+1;
            }
        }
        if(result)
            return result;
        else
            return insert_pos;
    }
};