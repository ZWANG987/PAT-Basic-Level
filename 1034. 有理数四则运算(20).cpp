/***
1034. ��������������(20)

ʱ������
200 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����Ҫ���д���򣬼���2���������ĺ͡�������̡�

�����ʽ��

������һ���а��ա�a1/b1 a2/b2���ĸ�ʽ��������������ʽ�������������з��Ӻͷ�ĸȫ�����ͷ�Χ�ڵ�����������ֻ���ܳ����ڷ���ǰ����ĸ��Ϊ0��

�����ʽ��

�ֱ���4���а��ա�������1 ����� ������2 = ������ĸ�ʽ˳�����2���������ĺ͡�������̡�ע�������ÿ�������������Ǹ��������������ʽ��k a/b��������k���������֣�a/b�����������֣���Ϊ��������������ţ���������ĸΪ0���������Inf������Ŀ��֤��ȷ�������û�г������ͷ�Χ��������

��������1��
2/3 -4/2
�������1��
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
��������2��
5/3 0/6
�������2��
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
