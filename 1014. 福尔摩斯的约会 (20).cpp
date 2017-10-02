/***
1014. 福尔摩斯的约会 (20)

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
大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：

输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。

输出格式：

在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
输出样例：
THU 14:04
***/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main() {
    string str1, str2, str3, str4, date;
    string a[7]={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int l1, l2, l3, l4, i, j, k, hour, minute, flag=0;
    cin>>str1>>str2>>str3>>str4;
    l1=str1.length();
    l2=str2.length();
    l3=str3.length();
    l4=str4.length();
    for (i=0; i<l1 && i<l2; i++) {
        if (str1[i]<='G' && str1[i]>='A' && str1[i]==str2[i] && flag==0) {
            k=str1[i]-'A';
            date=a[k];
            flag++;
        }
        else if (str1[i]==str2[i] && flag==1 && str1[i]<='N' && str1[i]>='A') {
            hour=str1[i]-'A'+10;
            flag++;
        }
        else if (str1[i]==str2[i] && flag==1 && str1[i]<='9' && str1[i]>='0') {
            hour=str1[i]-'0';
            flag++;
        }
    }
    for (i=0; i<l3 && i<l4; i++) {
        if ( (str3[i]<='Z' && str3[i]>='A') || (str3[i]<='z' && str3[i]>='a') ) {
            if (str3[i] == str4[i]) {
                minute=i;
                break;
            }
        }
    }
    cout<<date<<" ";
    printf ("%02d:%02d", hour, minute);
    return 0;
}
