/***
1011. A+B��C (15)

ʱ������
150 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
HOU, Qiming
��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��

�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��

��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

����������
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
***/

#include<iostream>
using namespace std;
int main() {
    int n, i;
    cin>>n;
    long int a[3];
    for (i=0; i<n; i++) {
        cin>>a[0]>>a[1]>>a[2];
        cout<<"Case #"<<i+1<<": ";
        if (a[0]+a[1]-a[2]>0)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}
