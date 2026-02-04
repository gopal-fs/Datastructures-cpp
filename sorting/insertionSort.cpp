
#include <iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &nums,int n){
    
    for(int i=1;i<nums.size();i++){
       int j=i-1;
       int curr=nums[i];
       
       while(j>=0 && nums[j]>curr){
           nums[j+1]=nums[j];
           j--;
       }
       
       nums[j+1]=curr;
    }
}

int main() {
    
    vector<int> nums={100,60,80,70,75};
    
    insertionSort(nums,5);
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

    return 0;
}