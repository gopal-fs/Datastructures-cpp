#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> & nums,int low,int mid,int high){
    
    int i=low;
    int j=mid+1;
    int size=high-low+1;
    int newArr[size];
    int k=0;
    while(i<=mid && j<=high){
        if(nums[i]<nums[j]){
            newArr[k]=nums[i];
            i++;
            k++;
        }
        else{
            newArr[k]=nums[j];
            k++;
            j++;
        }
    }
    while(i<=mid) newArr[k++]=nums[i++];
    while(j<=high) newArr[k++]=nums[j++];
    for(int c=0;c<size;c++){
        nums[low+c]=newArr[c];
    } 
}
void merge_sort(vector<int> &nums,int left,int right){
    
    if(left>=right) return;
    int mid=(left+right)/2;
    
    merge_sort(nums,left,mid);
    merge_sort(nums,mid+1,right);
    merge(nums,left,mid,right);
    
}


int main(){

    vector<int> nums={5,2,3,1,9,10};
   
   
    merge_sort(nums,0,nums.size()-1);
    
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

    
    return 0;
}