#include <stdio.h>
#define maxn 10005
#define INF 0x3f3f3f3f
int a[maxn];
int n;
void f() {
    int lsLeft=0, right=0, left=0;//lsLeft为临时左下标，left为最大子序列最左边下标，right为最右边下标
    int ThisSum=0, MaxSum=-INF;//首先ThisSum代表临时子列和，MaxSum为最大子列和
    for (int i = 0; i < n; i++) {
        ThisSum += a[i];
        if (ThisSum < 0) {
            ThisSum = 0;
            lsLeft = i+1;//更新临时下标
        }
        else if (ThisSum > MaxSum) {
            MaxSum = ThisSum;
            left = lsLeft;//更新左下标
            right = i;//右下标
        }
    }
    if (MaxSum < 0) {
        printf("0 %d %d", a[0], a[n-1]);
    }
    else {
        printf("%d %d %d", MaxSum, a[left], a[right]);
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    f();
    return 0;
}

