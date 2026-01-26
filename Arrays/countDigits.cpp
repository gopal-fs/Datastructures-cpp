#include <iostream>
#include <climits>
using namespace std;
int countDigits(int n) {
  if (n == 0) return 1;
  n = abs(n);
  int count = 0;
  while (n > 0) {
    n /= 10;
    count++;
  }
  return count;
}
int main() {
  int num = 259;
  int result = countDigits(num);
  cout << result << endl; 

  return 0;
}
 