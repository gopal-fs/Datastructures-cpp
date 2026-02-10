#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

void shell_sort(vector<int> &nums, int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = nums[i];
            int j;
            for (j = i; j >= gap && nums[j - gap] > temp; j -= gap) {
                nums[j] = nums[j - gap];
            }
            nums[j] = temp;
        }
    }
}

int main() {
    
    vector<int> nums={8,4,5,6,9,1,3,6};
    
    shell_sort(nums,nums.size());

    return 0;
}