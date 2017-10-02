/***
1003. ��Ҫͨ����(20)

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
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����

���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�

�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��

����������
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
���������
YES
YES
YES
YES
NO
NO
NO
NO
***/

//P֮ǰA�ĸ���*PT֮��A�ĸ���=T֮��A�ĸ���
#include<iostream>
#include<string>
using namespace std;

void check (string s)
{
    int lp, lt, len;
    lp=s.find('P',0);
    lt=s.find('T',0);
    len=s.length();
    if (lp==string::npos || lt==string::npos || lp>lt-2)
        cout<<"NO"<<endl;
    else {
        string a(s, 0, lp);
        string b(s, lp+1, lt-lp-1);
        string c(s, lt+1, len-lt-1);
        string ans=a+b+c;
        if (ans.find_first_not_of('A')!=string::npos)
            cout<<"NO"<<endl;
        else {
            if (lp==0 && lt-1==0)
                cout<<"YES"<<endl;
            else if (lp*(lt-lp-1)==len-lt-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return;
}
int main() {
    int n, i, k;
    string str;
    cin>>n;
    for (i=0; i<n; i++) {
        cin>>str;
        check(str);
    }
    return 0;
}
