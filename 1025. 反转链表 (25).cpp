/***
1025. 反转链表 (25)

时间限制
300 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
给定一个常数K以及一个单链表L，请编写程序将L中每K个结点反转。例如：给定L为1→2→3→4→5→6，K为3，则输出应该为3→2→1→6→5→4；如果K为4，则输出应该为4→3→2→1→5→6，即最后不到K个元素不反转。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出第1个结点的地址、结点总个数正整数N(<= 105)、以及正整数K(<=N)，即要求反转的子链结点的个数。结点的地址是5位非负整数，NULL地址用-1表示。

接下来有N行，每行格式为：

Address Data Next

其中Address是结点地址，Data是该结点保存的整数数据，Next是下一结点的地址。

输出格式：

对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。

输入样例：
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
输出样例：
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
