/***
1007. �����Բ��� (20)

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
�����Ƕ��� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i����������Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������

�ָ�������������N (< 105)������㲻����N���������������Եĸ�����

�����ʽ��ÿ�������������1����������������������N��

�����ʽ��ÿ���������������ռһ�У�������N���������������Եĸ�����

����������
20
���������
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
