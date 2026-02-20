class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {

        int left=0;
        int right=nums.size()-k;

        while(left<right){
            int mid=left+(right-left)/2;

            if(x-nums[mid]>nums[mid+k]-x) left=mid+1;
            else right=mid;
        }

        vector<int> res={};

        for(int i=left;i<left+k;i++) res.push_back(nums[i]);

        return res;
        
    }
};