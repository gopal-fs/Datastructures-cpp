#include<iostream>
#include<vector>
using namespace std;

int searchElement(vector<int> & nums,int target){

    int left=0;
    int right=nums.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) right=mid-1;
        else left=mid+1;
    }
    return -1;
}

int main(){

    vector<int> nums={1,2,3,4,5,6,7};
    int target=7;
    int res=searchElement(nums,target);
    if(res!=-1) cout<<"Your Element "<<target<<" Found at index "<<res;
    else cout<<"Element Not Found!";
    return 0;
    
}