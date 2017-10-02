/***
1013. 数素数 (20)

时间限制
100 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
***/

#include<iostream>
#include<cmath>
using namespace std;
int check_prime ( int x ) {
    int i;
    if (x == 2)
        return 1;
    for (i=2; i<=sqrt(x)+1; i++) {
        if (x%i == 0)
            return -1;
    }
    return 1;
}
int main() {
    int m, n, i, k, prime, num1=0, num2=1;
    cin>>m>>n;
    for (i=2; num1<m; i++) {
        k=check_prime(i);
        if (k == 1) {
            prime=i;
            num1++;
        }
    }
    cout<<prime;
    for (i=prime+1; num1<n; i++) {
        k=check_prime(i);
        if (k == 1) {
            prime=i;
            num1++;
            num2++;
            if (num2%10 != 1)
                cout<<" ";
            cout<<prime;
            if (num2%10 == 0) {
                cout<<endl;
            }
        }
    }
    return 0;
}
