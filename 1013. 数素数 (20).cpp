/***
1013. ������ (20)

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
��Pi��ʾ��i�����������θ�����������M <= N <= 104�������PM��PN������������

�����ʽ��

������һ���и���M��N������Կո�ָ���

�����ʽ��

�����PM��PN������������ÿ10������ռ1�У�����Կո�ָ�������ĩ�����ж���ո�

����������
5 27
���������
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
***/

#include<iostream>
#include<cmath>
using namespace std;
int check_prime ( int x ) {
    int i;
    if (x == 2)
        return 1;
    for (i=2; i<=sqrt(x)+1; i++) {
        if (x%i == 0)
            return -1;
    }
    return 1;
}
int main() {
    int m, n, i, k, prime, num1=0, num2=1;
    cin>>m>>n;
    for (i=2; num1<m; i++) {
        k=check_prime(i);
        if (k == 1) {
            prime=i;
            num1++;
        }
    }
    cout<<prime;
    for (i=prime+1; num1<n; i++) {
        k=check_prime(i);
        if (k == 1) {
            prime=i;
            num1++;
            num2++;
            if (num2%10 != 1)
                cout<<" ";
            cout<<prime;
            if (num2%10 == 0) {
                cout<<endl;
            }
        }
    }
    return 0;
}
