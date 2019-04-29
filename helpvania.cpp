#include <bits/stdc++.h>

typedef struct item {
    int weight;
    int value;
} item;

using namespace std;

int top_down(vector<vector<int>> &dp_table, vector<item> &bag, int n, int m) {

    if (dp_table[n][m] != -1) {
        // cout << "USING MEMORIZED VALUE:  " << dp_table[n][m] << '\n';
        return dp_table[n][m];
    }
    else {
        int dont_take = top_down(dp_table, bag, n-1, m);

        if (bag[n-1].weight > m) {
            dp_table[n][m] = dont_take;
            return dont_take;
        }
        else {
            int maximus = max(dont_take, top_down(dp_table, bag, n-1, m-bag[n-1].weight) + bag[n-1].value);
            dp_table[n][m] = maximus;
            return maximus;
        }
    }
}

int main () {
  int n;
  int s;
  int contador = 0;
    //receive input:
    while (true){
      contador++;

      cin >> n >> s;
      if (s == 0 && n == 0){
        return 0;
      }

      vector<item> bag(n);
      // long int sum = 0;
      for (int j = 0; j < n; j++) {
          int weight, value;
          cin >> weight >> value;
          bag[j].weight = weight;
          bag[j].value = value;
      }

      vector<vector<int>> dp_table(n+1, vector<int>(s + 1, -1)); //-1 means not yet calculated
      // for (int i = 0; i < n+1; i++) {
      //   for (int j = 0; j < s+1; j++)
      //     cout << dp_table[i][j] << ' ';
      //
      //   cout << '\n';
      // }
      //base case of recursion is dp_table[0, j] = 0:
      for (int j = 0; j < s + 1; j++)
          dp_table[0][j] = 0;

      int result = top_down(dp_table, bag, n, s);

      printf("Caso %d: %d\n",contador,result);



    }


}
