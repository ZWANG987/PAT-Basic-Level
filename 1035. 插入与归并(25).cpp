/***
1035. 插入与归并(25)

时间限制
200 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
根据维基百科的定义：

插入排序是迭代算法，逐一获得输入数据，逐步产生有序的输出序列。每步迭代中，算法从输入序列中取出一元素，将之插入有序序列中正确的位置。如此迭代直到全部元素有序。

归并排序进行如下迭代操作：首先将原始序列看成N个只包含1个元素的有序子序列，然后每次迭代归并两个相邻的有序子序列，直到最后只剩下1个有序的序列。

现给定原始序列和由某排序算法产生的中间序列，请你判断该算法究竟是哪种排序算法？

输入格式：

输入在第一行给出正整数N (<=100)；随后一行给出原始序列的N个整数；最后一行给出由某排序算法产生的中间序列。这里假设排序的目标序列是升序。数字间以空格分隔。

输出格式：

首先在第1行中输出“Insertion Sort”表示插入排序、或“Merge Sort”表示归并排序；然后在第2行中输出用该排序算法再迭代一轮的结果序列。题目保证每组测试的结果是唯一的。数字间以空格分隔，且行末不得有多余空格。
输入样例1：
10
3 1 2 8 7 5 9 4 6 0
1 2 3 7 8 5 9 4 6 0
输出样例1：
Insertion Sort
1 2 3 5 7 8 9 4 6 0
输入样例2：
10
3 1 2 8 7 5 9 4 0 6
1 3 2 8 5 7 4 9 0 6
输出样例2：
Merge Sort
1 2 3 8 4 5 7 9 0 6
***/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, i, j, a[105], b[105], m, k=1, p=1;
    cin>>n;
    for (i=0; i<n; i++)
        cin>>a[i];
    for (i=0; i<n; i++)
        cin>>b[i];
    for (i=0; b[i+1]>=b[i] && i<n-1; i++);
    for (j=i+1; a[j] == b[j] && j<n; j++);
    if (j == n) {
        cout<<"Insertion Sort"<<endl;
        sort (a, a+i+2);
    }
    else {
        cout<<"Merge Sort"<<endl;
        while (p) {
            for (j=0; a[j] == b[j] && j<n; j++);
            if (j == n)
                p = 0;
            k *= 2;
        for (i=0; i<n/k; i++)
            sort (a+i*k, a+(i+1)*k);
        sort (a+n/k*k, a+n);
        }
    }
    cout<<a[0];
    for (i=1; i<n; i++)
        cout<<" "<<a[i];
    return 0;
}
