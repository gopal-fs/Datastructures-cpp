class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minPrice=arr[0];
        int maxProfit=0;

        for(int i=0;i<arr.size();i++){
            minPrice=min(arr[i],minPrice);
            maxProfit=max(maxProfit,arr[i]-minPrice);
        }
        return maxProfit;
        
    }
};