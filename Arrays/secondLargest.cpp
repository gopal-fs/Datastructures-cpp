#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

string secondLargest(int arr[], int n) {
  if (n < 2) return "Array should have at least two numbers";
  int first = INT_MIN, second = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (arr[i] > first) {
      second = first;
      first = arr[i];
    } else if (arr[i] > second && arr[i] != first) {
      second = arr[i];
    }
  }
  return (second == INT_MIN) ? "No second largest found" : to_string(second);
}

int main() {
  int arr[] = {0, 3, 5, 2, 7, 9};
  cout << secondLargest(arr, 6) << endl;
  return 0;
}