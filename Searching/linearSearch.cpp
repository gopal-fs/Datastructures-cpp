#include<iostream>
#include<vector>
using namespace std;


int searchElement(vector<int> & nums,int target){

    for(int i=0;i<nums.size();i++){
        if(nums[i]==target) return i;
    }

    return -1;
}


int main(){

    vector<int> nums={1,2,3,4,5,6,7};
    int target=1;
    int res=searchElement(nums,target);

    if(res!=-1) cout<<"Your Element "<<target<<" Found at index "<<res;
    else cout<<"Element Not Found!";
    return 0;
}