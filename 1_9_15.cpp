#include <iostream>
#include <cmath>
 
using namespace std;
 
int get_num_throws(int level)
{
    if (level < 2)
        return 0;
    return ceil(0.5*sqrt(1+8*(level - 1))-0.5);
}
 
int get_num_throws2(int level)
{
    int num_throws = 0;
    long max_level = 1;
    while (max_level < level)
        max_level += ++num_throws;
    return num_throws;
}
 
int main()
{
    int n;
    cin >> n;
    cout << get_num_throws(n);
}
