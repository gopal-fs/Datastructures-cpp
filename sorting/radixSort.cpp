#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


void change_arr(vector<int>& nums,vector<vector<int>> &temp,int n){
    
    int k=0;
    for(auto &bucket:temp){
        
        if(!bucket.empty()){
            for(int num:bucket) nums[k++]=num;
        }
        bucket.clear();
        
        
    }
    
    
}

void radix_sort(vector<int>& nums,int n) {
    
    int rev=1;
    vector<vector<int>> temp(10);
    int maxi=*max_element(nums.begin(),nums.end());
    while(maxi/rev>0){
        
        for(int j=0;j<n;j++){
            
            int lastDigit = (nums[j]/rev)%10;
            
            temp[lastDigit].push_back(nums[j]);
            
        }
        
        change_arr(nums,temp,n);
        
        
        rev=rev*10;
    }
    
    
    
    for(int  num:nums) cout<<num<<" ";
}

int main() {
    
    vector<int> nums={237,146,259,348,152,163,235,48,36,62};
    
    radix_sort(nums,nums.size());

    return 0;
}