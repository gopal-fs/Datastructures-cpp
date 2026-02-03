
#include <iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &nums,int n){
    
    for(int i=0;i<nums.size()-1;i++){
        bool swap=false;
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                swap=true;
            }
        }
        if(!swap) break;
    }
}

int main() {
    
    vector<int> nums={100,60,80,70,75};
    
    bubbleSort(nums,5);
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

    return 0;
}