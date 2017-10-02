/***
1007. 素数对猜想 (20)

时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。显然有 d1=1 且对于n>1有 dn 是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。

输入格式：每个测试输入包含1个测试用例，给出正整数N。

输出格式：每个测试用例的输出占一行，不超过N的满足猜想的素数对的个数。

输入样例：
20
输出样例：
4
***/

#include<iostream>
#include<cmath>
using namespace std;
int check_prime ( int m ) {
    int j;
    if (m == 1)
        return -1;
    for (j=2; j<=sqrt(m)+1; j++) {
        if (m%j==0)
            return -1;
    }
    return 1;
}
int main() {
    int n, i, k, a[100001], num1=0, num2=0;
    cin>>n;
    a[0]=2;
    a[1]=3;
    for (i=1; i<=n; i++) {
        k=check_prime(i);
        if (k==1) {
            a[num1]=i;
            num1++;
        }
    }
    for (i=0; i<num1-1; i++) {
        if (a[i+1]-a[i]==2)
            num2++;
    }
    cout<<num2;
    return 0;
}
