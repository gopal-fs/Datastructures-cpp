#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

void count_sort(vector<int> &nums,int n){
    int maxi=*max_element(nums.begin(),nums.end());
    
    vector<vector<int>> buckets(maxi+1);
    
    for(int num:nums){
        buckets[num].push_back(num);
    }
    int k=0;
    for(auto bucket:buckets){
        if(!bucket.empty()){
            for(int num:bucket){
                nums[k++]=num;
            }
        }
    }
    for(int num:nums) cout<<num<<" ";
}

int main() {
    
    vector<int> nums={8,4,5,6,9,1,3,6};
    
    count_sort(nums,nums.size());

    return 0;
}