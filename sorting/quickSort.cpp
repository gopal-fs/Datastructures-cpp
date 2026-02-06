#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &nums,int low,int high){
    int pivot=nums[low];
    int i=low;
    int j=high;
    while(i<=j){
        while(nums[i]<=pivot && i<=j) i++;
        while(nums[j]>pivot && j>=1) j--;
        
        if(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    
    int temp=pivot;
    nums[low]=nums[j];
    nums[j]=temp;
    
    return j;
    
    
    
}

void quick_sort(vector<int> &nums,int low,int high){
    if(low>=high) return;
    
    int j=partition(nums,low,high);
    
    quick_sort(nums,low,j);
    quick_sort(nums,j+1,high);
}



int main(){

    vector<int> nums={5,2,3,100,1,9,10};
   
   
    quick_sort(nums,0,nums.size()-1);
    
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

    
    return 0;
}