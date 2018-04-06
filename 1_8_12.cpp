/* По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  int m;
  cin >> n >> m;
  int mat[n][m];
  int i, j, row = 0, col = 0, f = 1;
  while(row <= (n - 1)){
      i = row;
      j = col;
      while((i < n) && (j >= 0))
          mat[i++][j--] = f++;
      if(col < (m - 1))
          ++col;
      else
          ++row;
  }
  for(i = 0; i < n; ++i){
      for(j = 0; j < m; ++j){
          cout << setw(4) << mat[i][j];
      }
      cout << endl;
  }
  return 0;
}
