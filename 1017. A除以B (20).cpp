/***
1017. A����B (20)

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
����Ҫ�����A/B������A�ǲ�����1000λ����������B��1λ������������Ҫ�������Q������R��ʹ��A = B * Q + R������

�����ʽ��

������1�������θ���A��B���м���1�ո�ָ���

�����ʽ��

��1�����������Q��R���м���1�ո�ָ���

����������
123456789050987654321 7
���������
17636684150141093474 3
***/

#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    int b, temp=0, i, len, flag=0;
    cin>>a>>b;
    len=a.length();
    for (i=0; i<len; i++) {
        temp = temp*10+(a[i]-'0');
        if (temp >= b) {
            cout<<temp/b;
            flag=1;
        }
        else if (flag == 1) {
            cout<<"0";
        }
        temp%=b;
    }
    if (flag == 0)
        cout<<"0";
    cout<<" "<<temp;
    return 0;
}
