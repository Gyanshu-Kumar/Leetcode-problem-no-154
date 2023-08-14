class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            int mid = (start + end)/2;
            if(nums[mid]<nums[end]){
                end = mid;
            }
            else if(nums[mid]==nums[end]) {
            end = end -1;
            }
            else{
                start = mid + 1;
            }
        }
        return nums[start];
        
    }
};