/***
1009. 说反话 (20)

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
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
***/

#include<iostream>
#include<string>
using namespace std;
int main() {
    string str1, str2[80];
    int i, j, num=0, location, k=0, len;
    getline(cin, str1);
    len=str1.length();
    for (i=0; location!=string::npos; i++) {
        location=str1.find(" ",k);
        string temp(str1, k, location-k);
        str2[i]=temp;
        k=location+1;
    }
    cout<<str2[i-1];
    for (j=i-2; j>=0; j--)
        cout<<" "<<str2[j];
    return 0;
}
