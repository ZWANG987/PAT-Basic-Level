/***
1003. 我要通过！(20)

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
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
***/

//P之前A的个数*PT之间A的个数=T之后A的个数
#include<iostream>
#include<string>
using namespace std;

void check (string s)
{
    int lp, lt, len;
    lp=s.find('P',0);
    lt=s.find('T',0);
    len=s.length();
    if (lp==string::npos || lt==string::npos || lp>lt-2)
        cout<<"NO"<<endl;
    else {
        string a(s, 0, lp);
        string b(s, lp+1, lt-lp-1);
        string c(s, lt+1, len-lt-1);
        string ans=a+b+c;
        if (ans.find_first_not_of('A')!=string::npos)
            cout<<"NO"<<endl;
        else {
            if (lp==0 && lt-1==0)
                cout<<"YES"<<endl;
            else if (lp*(lt-lp-1)==len-lt-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return;
}
int main() {
    int n, i, k;
    string str;
    cin>>n;
    for (i=0; i<n; i++) {
        cin>>str;
        check(str);
    }
    return 0;
}
