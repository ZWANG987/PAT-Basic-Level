/***
1019. 数字黑洞 (20)

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
给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，然后用第1个数字减第2个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...

现给定任意4位正整数，请编写程序演示到达黑洞的过程。

输入格式：

输入给出一个(0, 10000)区间内的正整数N。

输出格式：

如果N的4位数字全相等，则在一行内输出“N - N = 0000”；否则将计算的每一步在一行内输出，直到6174作为差出现，输出格式见样例。注意每个数字按4位数格式输出。

输入样例1：
6767
输出样例1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
输入样例2：
2222
输出样例2：
2222 - 2222 = 0000
***/

#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int upward (int x) {
    int a[4];
    a[0] = x%10;
    a[1] = (x/10)%10;
    a[2] = (x/100)%10;
    a[3] = x/1000;
    sort(a,a+4,less_equal<int>());
    x=a[0]*1000+a[1]*100+a[2]*10+a[3];
    return x;
}
int downward (int x) {
    int a[4];
    a[0] = x%10;
    a[1] = (x/10)%10;
    a[2] = (x/100)%10;
    a[3] = x/1000;
    sort(a,a+4,greater_equal<int>());
    x=a[0]*1000+a[1]*100+a[2]*10+a[3];
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s1, s2, s3;
    s3=n;
    do{
        s1=downward(s3);
        s2=upward(s3);
        s3=s1-s2;
        printf("%04d - %04d = %04d\n", s1, s2, s3);
        if(s3 == 0)
            break;
    }while (s3 != 6174);
    return 0;
}
