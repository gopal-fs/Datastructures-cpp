#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

void count_sort(vector<int> &nums,int n){
    int maxi=*max_element(nums.begin(),nums.end());
    vector<int> temp(maxi+1, 0);
   for(int num:nums){
       temp[num]++;
   }
   int i=0;
   int j=0;
   while(i<maxi+1){
       if(temp[i]>0){
           nums[j]=i;
           j++;
           temp[i]--;
       }
       else i++;
   }
   
   for(int num:nums) cout<<num<<" ";
}

int main() {
    
    vector<int> nums={8,4,5,6,9,1,3,6};
    
    count_sort(nums,nums.size());

    return 0;
}