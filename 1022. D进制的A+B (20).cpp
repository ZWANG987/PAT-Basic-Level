/***
1022. D���Ƶ�A+B (20)

ʱ������
100 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������

�����ʽ��

������һ�������θ���3������A��B��D��

�����ʽ��

���A+B��D��������

����������
123 456 8
���������
1103
***/

#include<iostream>
using namespace std;

void transf (int x, int y) {
    if (x/y == 0)
        cout<<x;
    else {
        transf (x/y, y);
        cout<<x%y;
    }
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>d;
    c=a+b;
    transf(c, d);
    return 0;
}
