#include <bits/stdc++.h>

using namespace std;

// #define MAXSIZE 10005

int main() {

  // vector<int> dp(MAXSIZE, -1);
  long long int n;
  while (scanf("%lld", &n) != EOF) {

      long long int cur = 0;
      long long int iter = 1;
      while (true) {
        cur=cur%n;
        cur *= 10;
        cur++;
        if ((cur%n) == 0) {
          cout << iter << '\n';
          
          // cout << n <<' '<<  cur << '\n';
          break;
        }
        iter++;
      }

    }



  return 0;
}
