/***
1016. ����A+B (15)

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
������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��

�ָ���A��DA��B��DB�����д�������PA + PB��

�����ʽ��

������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��

�����ʽ��

��һ�������PA + PB��ֵ��

��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
0
***/

#include<iostream>
using namespace std;
int num (int x, int y) {
    long int k, p=0;
    while (x != 0) {
        k=x%10;
        if (k == y)
            p++;
        x/=10;
    }
    return p;
}
int sum ( int x, int y) {
    int i, q=0;
    for (i=0; i<y; i++) {
        q=q*10+x;
    }
    return q;
}
int main() {
    int a, da, pa, numa, b, db, pb, numb;
    cin>>a>>da>>b>>db;
    numa = num (a, da);
    numb = num (b, db);
    pa = sum (da, numa);
    pb = sum (db, numb);
    cout<<pa+pb;
    return 0;
}
