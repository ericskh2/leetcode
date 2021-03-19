class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m]==target){
                return m;
            }
            if(nums[m]<target){
                l = m+1;
            }
            if(nums[m]>target){
                r = m-1;
            }
        }
        return -1;
    }
};
