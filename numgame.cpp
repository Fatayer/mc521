#include <bits/stdc++.h>

#define MAXSIZE 500000000

using namespace std;

int main () {



  int dp[MAXSIZE];

  int last_calc = 1;
  dp[1] = 1;

  int a, b;

  while (scanf("%d %d\n", &a, &b) != EOF) {

    //b is larger
    //check if already calculated
    if (last_calc < b) {
      //calculate dp until b
      for (int i = last_calc+1; i <= b; i++) {
        if (i%2 == 0) {
          dp[i] = dp[i-1];
        }
        else {
          int aux = i;
          int acc = 0;
          while (aux > 0) {
            acc += aux % 10;
            aux /= 10;
          }
          dp[i] = dp[i-1] + acc;
        }
      }
    }
    else {
      //dont do shit
    }
    if (a%2 == 1) {
      int aux=a;
      int acc = 0;
      while (aux > 0) {
        acc += aux % 10;
        aux /= 10;
      }
      cout << dp[b] - dp[a] + acc << '\n'; //sum a if a is odd
    }
    else {
      cout << dp[b] - dp[a] << '\n';
    }



  }



  return 0;
}
