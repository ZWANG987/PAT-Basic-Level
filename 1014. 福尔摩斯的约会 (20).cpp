/***
1014. ����Ħ˹��Լ�� (20)

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
����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm��������̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04������Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'�����������ģ���2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ�����������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��

������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����

�����ʽ��

��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH:MM�������С�DAY����ĳ���ڵ�3�ַ���д����MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ�����ģ�FRI��ʾ�����壬SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
���������
THU 14:04
***/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main() {
    string str1, str2, str3, str4, date;
    string a[7]={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int l1, l2, l3, l4, i, j, k, hour, minute, flag=0;
    cin>>str1>>str2>>str3>>str4;
    l1=str1.length();
    l2=str2.length();
    l3=str3.length();
    l4=str4.length();
    for (i=0; i<l1 && i<l2; i++) {
        if (str1[i]<='G' && str1[i]>='A' && str1[i]==str2[i] && flag==0) {
            k=str1[i]-'A';
            date=a[k];
            flag++;
        }
        else if (str1[i]==str2[i] && flag==1 && str1[i]<='N' && str1[i]>='A') {
            hour=str1[i]-'A'+10;
            flag++;
        }
        else if (str1[i]==str2[i] && flag==1 && str1[i]<='9' && str1[i]>='0') {
            hour=str1[i]-'0';
            flag++;
        }
    }
    for (i=0; i<l3 && i<l4; i++) {
        if ( (str3[i]<='Z' && str3[i]>='A') || (str3[i]<='z' && str3[i]>='a') ) {
            if (str3[i] == str4[i]) {
                minute=i;
                break;
            }
        }
    }
    cout<<date<<" ";
    printf ("%02d:%02d", hour, minute);
    return 0;
}
