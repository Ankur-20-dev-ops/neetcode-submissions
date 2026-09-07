class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for(int i = 0; i + 1 < nums.size(); i++){
            if(nums[i] > nums[i + 1]){
                increasing = false;
            }
            if(nums[i] < nums[i + 1]){
                decreasing = false;
            }
        }
        return increasing || decreasing;
    }
};