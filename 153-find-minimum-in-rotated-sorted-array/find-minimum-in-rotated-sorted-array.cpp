class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int start = 0;
        int end = size - 1;

        while (start < end) {
            int mid = start + (end-start)/2;
            if (nums[mid] > nums[end]) {
                start = mid+1;
            } else {
                end = mid;
            }
        }
        return nums[start];
    }
};
