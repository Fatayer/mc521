#include <bits/stdc++.h>

using namespace std;

#define MAX_N 9

// int COIN[MAX_N] = {1,2,6,24,120,720,5040,40320,362880};
/*c o i n change dp a l g o r it hm v a l − value of the c o i n change
n − number of c o i n denominations */



int main() {


  int n;
  cin >> n;

  vector<int> fact(9);
  fact[0] = 1;
  fact[1] = 2;
  fact[2] = 6;
  fact[3] = 24;
  fact[4] = 120;
  fact[5] = 720;
  fact[6] = 5040;
  fact[7] = 40320;
  fact[8] = 362880;


  int counter = 0;
  while (n != 0) {
      auto val = upper_bound (fact.begin(), fact.end(), n);
      val--;
      int reduce = *val;
      n -= reduce;
      counter++;
  }
  cout << counter << '\n';

  return 0;
}
