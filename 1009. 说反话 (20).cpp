/***
1009. ˵���� (20)

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
����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�

����������
Hello World Here I Come
���������
Come I Here World Hello
***/

#include<iostream>
#include<string>
using namespace std;
int main() {
    string str1, str2[80];
    int i, j, num=0, location, k=0, len;
    getline(cin, str1);
    len=str1.length();
    for (i=0; location!=string::npos; i++) {
        location=str1.find(" ",k);
        string temp(str1, k, location-k);
        str2[i]=temp;
        k=location+1;
    }
    cout<<str2[i-1];
    for (j=i-2; j>=0; j--)
        cout<<" "<<str2[j];
    return 0;
}
