/***
1020. �±� (25)

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
�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ��������಻ͬ��ζ���±����ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١�

ע�⣺����ʱ����ȡ��һ���ֿ�档���������������������ģ�����������3���±����������ֱ�Ϊ18��15��10��֣����ۼ۷ֱ�Ϊ75��72��45��Ԫ������г������������ֻ��20��֣���ô��������������Ӧ��������ȫ��15��ֵ�2���±����Լ�5��ֵ�3���±������ 72 + 45/2 = 94.5����Ԫ����

�����ʽ��

ÿ���������1������������ÿ�����������ȸ���һ��������1000��������N��ʾ�±������������Լ�������500�������Ϊ��λ����������D��ʾ�г���������������һ�и���N��������ʾÿ���±��Ŀ�����������Ϊ��λ�������һ�и���N��������ʾÿ���±������ۼۣ�����ԪΪ��λ�������ּ��Կո�ָ���

�����ʽ��

��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С�����2λ��

����������
3 20
18 15 10
75 72 45
���������
94.50
***/

#include<cstdio>
#include<algorithm>
struct Mooncake{
    double store;
    double total_price;
    double unit_price;
}moon[1002];
bool comp (Mooncake A, Mooncake B) {
    return A.unit_price >= B.unit_price;
}
int main() {
    int n, d, i;
    double temp_sum=0.0, temp_profit=0.0;
    scanf ("%d %d", &n, &d);
    for (i=0; i<n; i++)
        scanf ("%lf", &moon[i].store);
    for (i=0; i<n; i++) {
        scanf ("%lf", &moon[i].total_price);
        moon[i].unit_price=moon[i].total_price/moon[i].store;
    }
    std::sort (moon, moon+n, comp);
    i=0;
    while (temp_sum+moon[i].store<=d && i<n) {
            temp_sum+=moon[i].store;
            temp_profit+=moon[i].total_price;
            i++;
        }
    if (i<n)
        temp_profit+=(d-temp_sum)*moon[i].unit_price;
    printf ("%.2lf", temp_profit);
    return 0;
}
