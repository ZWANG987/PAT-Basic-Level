/***
1029. 旧键盘(20)

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
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。

输入格式：

输入在2行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是不超过80个字符的串，由字母A-Z（包括大、小写）、数字0-9、以及下划线“_”（代表空格）组成。题目保证2个字符串均非空。

输出格式：

按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有1个坏键。

输入样例：
7_This_is_a_test
_hs_s_a_es
输出样例：
7TI
***/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
    int i, len1, len2;
    char a[85], b[85], test[256]={'0'}, temp;
    gets(a);
    gets(b);
    len1=strlen(a);
    len2=strlen(b);
    for (i=0; i<len2; i++) {
        test[b[i]]=1;
    }
    for (i=0; i<len1; i++) {
        if (a[i] <= 'z' && a[i] >= 'a') {
            temp=a[i]-'a'+'A';
            if (test[a[i]] == 0 && test[temp] == 0) {
                cout<<temp;
                test[temp]=2;
                test[a[i]]=2;
            }
        }
        else if (test[a[i]] == 0) {
            test[a[i]]=2;
            cout<<a[i];
        }
    }
    return 0;
}
