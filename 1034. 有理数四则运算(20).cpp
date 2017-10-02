/***
1034. 有理数四则运算(20)

时间限制
200 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
本题要求编写程序，计算2个有理数的和、差、积、商。

输入格式：

输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，负号只可能出现在分子前，分母不为0。

输出格式：

分别在4行中按照“有理数1 运算符 有理数2 = 结果”的格式顺序输出2个有理数的和、差、积、商。注意输出的每个有理数必须是该有理数的最简形式“k a/b”，其中k是整数部分，a/b是最简分数部分；若为负数，则须加括号；若除法分母为0，则输出“Inf”。题目保证正确的输出中没有超过整型范围的整数。

输入样例1：
2/3 -4/2
输出样例1：
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
输入样例2：
5/3 0/6
输出样例2：
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
***/

#include<cstdio>
using namespace std;
int gca (long long int m, long long int n) {
    long long r;
    if (m < n) {
        m=m+n;
        n=m-n;
        m=m-n;
    }
    r=m%n;
    while (r) {
        m = n;
        n = r;
        r = m%n;
    }
    return n;
}
void huajian (long long int x, long long int y) {
    long long int p, q, flag = 1;
    if (x < 0) {
        x = -x;
        flag = -flag;
    }
    if (y < 0) {
        y = -y;
        flag = -flag;
    }
    if (y == 0)
        printf ("Inf");
    else if (x == 0)
        printf ("0");
    else if (x < y) {
        p = gca (y, x);
        if (p != 1) {
            y /= p;
            x /= p;
        }
        if (flag == -1)
            printf ("(");
        if (x != 0)
            printf ("%lld/%lld", x*flag, y);
        if (x == 0)
            printf ("0");
        if (flag == -1)
            printf (")");
    }
    else if (x >= y) {
        q = x/y;
        x %= y;
        if (x != 0) {
            p = gca(y, x);
            y /= p;
            x /= p;
        }
        if (flag == -1)
            printf ("(");
        if (x != 0)
            printf ("%lld %lld/%lld", q*flag, x, y);
        if (x == 0)
            printf ("%lld", q*flag);
        if (flag == -1)
            printf (")");
    }
    return;
}
void add (long long int a, long long int b, long long int c, long long int d) {
    huajian (a, b);
    printf (" + ");
    huajian (c, d);
    printf (" = ");
    huajian (a*d+b*c, b*d);
    printf ("\n");
}
void minu (long long int a, long long int b, long long int c, long long int d) {
    huajian (a, b);
    printf (" - ");
    huajian (c, d);
    printf (" = ");
    huajian (a*d-b*c, b*d);
    printf ("\n");
}
void multi (long long int a, long long int b, long long int c, long long int d) {
    huajian (a, b);
    printf (" * ");
    huajian (c, d);
    printf (" = ");
    huajian (a*c, b*d);
    printf ("\n");
}
void divide (long long int a, long long int b, long long int c, long long int d) {
    huajian (a, b);
    printf (" / ");
    huajian (c, d);
    printf (" = ");
    huajian (a*d, b*c);
}
int main() {
    long long int a, b, c, d;
    scanf ("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    add (a, b, c, d);
    minu (a, b, c, d);
    multi (a, b, c, d);
    divide (a, b, c, d);
    return 0;
}
