#include <iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &nums,int n){
    
    for(int i=0;i<nums.size()-1;i++){
        int mini=i;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[mini]) mini=j;
        }
        
        if(mini!=i) swap(nums[i],nums[mini]);
    }
}

int main() {
    
    vector<int> nums={100,60,80,70,75};
    
    selectionSort(nums,5);
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

    return 0;
}