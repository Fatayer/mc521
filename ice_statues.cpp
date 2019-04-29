#include <bits/stdc++.h>

using namespace std;

#define MAX_N 50
#define MAX_VAL 1000005
int COIN[MAX_N], DP[MAX_VAL];
/*c o i n change dp a l g o r it hm v a l − value of the c o i n change
n − number of c o i n denominations */

int dp_coin (int val, int n) {
  DP[ 0 ] = 0;
    for ( int v = 1; v <= val; ++v) {
      DP[v] = MAX_VAL;
        for (int i = 0; i < n ; ++i) {
        if (v >= COIN[i] ) {
          DP[v] = min (DP[v], DP[v - COIN[i]] + 1);
        }
      }
    }
    return DP[val];
}

int main() {


  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;

    for (int j = 0; j < n; j++) {
      int aux;
      cin >> aux;
      COIN[j] = aux;
    }

    cout << dp_coin(m, n) << '\n';


  }

  return 0;
}
