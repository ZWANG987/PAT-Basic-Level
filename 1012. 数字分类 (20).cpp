/***
1012. 数字分类 (20)

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
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入格式：

每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

输出格式：

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9
***/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int n, i, a[1002], b[5]={0}, num1=0, num2=0;
    cin>>n;
    double ave_a4;
    for (i=0; i<n; i++) {
        cin>>a[i];
        if (a[i]%10 == 0)
            b[0]+=a[i];
        else if (a[i]%5 == 1) {
            b[1]=b[1]+a[i]*pow(-1, num1);
            num1++;
        }
        else if (a[i]%5 == 2)
            b[2]++;
        else if (a[i]%5 == 3) {
            b[3]+=a[i];
            num2++;
        }
        else if (a[i]%5 == 4 && a[i]>b[4])
            b[4]=a[i];
    }
    ave_a4=b[3]*1.0/num2;
    if (b[0] == 0)
        cout<<"N"<<" ";
    else if (b[0] != 0)
        cout<<b[0]<<" ";
    if (num1 == 0)
        cout<<"N"<<" ";
    else if (num1 != 0)
        cout<<b[1]<<" ";
    if (b[2] == 0)
        cout<<"N"<<" ";
    else if (b[2] != 0)
        cout<<b[2]<<" ";
    if (b[3] == 0)
        cout<<"N"<<" ";
    else if (b[3] != 0)
        cout<<fixed<<setprecision(1)<<ave_a4<<" ";
    if (b[4] == 0)
        cout<<"N";
    else if (b[4] != 0)
        cout<<b[4];
    return 0;
}
