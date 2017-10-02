/***
1016. 部分A+B (15)

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
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入格式：

输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。

输出格式：

在一行中输出PA + PB的值。

输入样例1：
3862767 6 13530293 3
输出样例1：
399
输入样例2：
3862767 1 13530293 8
输出样例2：
0
***/

#include<iostream>
using namespace std;
int num (int x, int y) {
    long int k, p=0;
    while (x != 0) {
        k=x%10;
        if (k == y)
            p++;
        x/=10;
    }
    return p;
}
int sum ( int x, int y) {
    int i, q=0;
    for (i=0; i<y; i++) {
        q=q*10+x;
    }
    return q;
}
int main() {
    int a, da, pa, numa, b, db, pb, numb;
    cin>>a>>da>>b>>db;
    numa = num (a, da);
    numb = num (b, db);
    pa = sum (da, numa);
    pb = sum (db, numb);
    cout<<pa+pb;
    return 0;
}
