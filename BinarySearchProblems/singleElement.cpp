class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;

            if(nums[mid]==nums[mid-1]){
                int leftMost=mid-1-left;
                if(leftMost%2==0){
                    left=mid+1;
                }
                else{
                    right=mid-2;
                }
            }
            else if(nums[mid]==nums[mid+1]){
                int rightMost=right-mid+1;

                if(rightMost%2==0){
                    right=mid-1;
                }
                else{
                    left=mid+2;
                }

            }
            else return nums[mid];
        }
        return nums[left];
    }
};