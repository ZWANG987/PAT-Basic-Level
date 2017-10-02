/***
1025. ��ת���� (25)

ʱ������
300 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
����һ������K�Լ�һ��������L�����д����L��ÿK����㷴ת�����磺����LΪ1��2��3��4��5��6��KΪ3�������Ӧ��Ϊ3��2��1��6��5��4�����KΪ4�������Ӧ��Ϊ4��3��2��1��5��6������󲻵�K��Ԫ�ز���ת��

�����ʽ��

ÿ���������1������������ÿ������������1�и�����1�����ĵ�ַ������ܸ���������N(<= 105)���Լ�������K(<=N)����Ҫ��ת���������ĸ��������ĵ�ַ��5λ�Ǹ�������NULL��ַ��-1��ʾ��

��������N�У�ÿ�и�ʽΪ��

Address Data Next

����Address�ǽ���ַ��Data�Ǹý�㱣����������ݣ�Next����һ���ĵ�ַ��

�����ʽ��

��ÿ������������˳�������ת�����������ÿ�����ռһ�У���ʽ��������ͬ��

����������
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
���������
00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1
***/

#include<cstdio>
#include<vector>
using namespace std;
struct node{
    int address;
    int data;
    int next;
};
int main() {
    int first_address, n, k, i, num=0, next_one, right, a, b, c;
    scanf ("%d %d %d", &first_address, &n, &k);
    vector<node> p(100005), q, r;
    node temp;
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &a, &b, &c);
        p[a].address=a, p[a].data=b, p[a].next=c;
    }
    if (first_address == -1)
        printf ("-1\n");
    else {
        next_one = first_address;
        while (next_one != -1) {
            q.push_back(p[next_one]);
            next_one = q[num].next;
            num++;
        }
        right = k-1;
        while (right < num) {
            for (i=right; i>right-k; i--) {
                r.push_back(q[i]);
            }
            right += k;
        }
        for (i=right-k+1; i<num; i++)
            r.push_back(q[i]);
        for (i=0; i<num-1; i++) {
            printf ("%05d %d %05d\n", r[i].address, r[i].data, r[i+1].address);
        }
        printf ("%05d %d %d", r[i].address, r[i].data, -1);
    }
    return 0;
}
