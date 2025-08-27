#include<iostream>
using namespace std;

// return a to the power n
// as in the problem a, n <= 10
// so in the worst case, a = n = 10
// so a^n = 10^10 and we can't store it in 32 bit int
// thats why we should use long long here
long long get_power(int a, int n) {
  long long power = 1;
  // multiply a total n times
  for (int i = 1; i <= n; i++) {
    power *= a;
  }
  return power;
}
// return long long for the similar reasons as above
long long solve(int x, int n) {
  long long sum = 0;
  for (int i = 0; i <= n; i += 2) { // loop over even numbers
    sum += get_power(x, i);
  }
  sum -= 1; // -1 for (x^0 - 1)
  return sum;
}
int main() {
  int x, n; cin >> x >> n;
  cout << solve(x, n) << '\n';
  return 0;
}
