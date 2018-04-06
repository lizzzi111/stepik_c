/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.
Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   3   4   5
  10   9   8   7   6
  11  12  13  14  15 */


#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            if(y%2 == 0){
                a[y][x] = x + y * m + 1;
            } else {
                a[y][m - 1 - x] = x + y * m + 1;
            }
        }
    }
    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            cout << setw(4) << a[y][x];
        }
        cout << endl;
    }
  return 0;
}
