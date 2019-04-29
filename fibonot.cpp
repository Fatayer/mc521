#include <bits/stdc++.h>

using namespace std;

#define MAXSIZENOT 100005
#define  ALPHA 1000000

int main () {

  int k;
  cin >> k;

  int fibonot[MAXSIZENOT];
  int lcnot = 0;
  // fibonot[1] = 4;
  unordered_set<int> fibo;
  int f1, f2;
  f1 = 1;
  f2 = 1;
  fibo.insert(1);
  int cur = -1;
  while (cur < ALPHA) {
    cur = f1 + f2;
    f1 = f2;
    f2 = cur;
    fibo.insert(cur);

  }

  if (lcnot < k) {
    int j = lcnot+1;
    int i = lcnot+1;
    while (lcnot < k) {
      if (fibo.find(i) == fibo.end()) {
        fibonot[j] = i;
        lcnot = j;
        j++;
      }
      i++;
    }
  }
  cout << fibonot[k] << '\n';

  return 0;

}
