/***
1002. д������� (20)

ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
***/

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main() {
    char k;
    string pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int n, sum=0, a[5], i=0, j;
    while ( (k=cin.get()) != '\n') {
        n=k-'0';
        sum+=n;
    }
    while (sum!=0) {
        a[i]=sum%10;
        sum/=10;
        i++;
    }
    cout<<pinyin[a[i-1]];
    i--;
    while (i>=1) {
        cout<<" "<<pinyin[a[i-1]];
        i--;
    }
    return 0;
}
