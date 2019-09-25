#include <stdio.h>
#define maxn 10005
#define INF 0x3f3f3f3f
int a[maxn];
int n;
void f() {
    int lsLeft=0, right=0, left=0;//lsLeftΪ��ʱ���±꣬leftΪ���������������±꣬rightΪ���ұ��±�
    int ThisSum=0, MaxSum=-INF;//����ThisSum������ʱ���кͣ�MaxSumΪ������к�
    for (int i = 0; i < n; i++) {
        ThisSum += a[i];
        if (ThisSum < 0) {
            ThisSum = 0;
            lsLeft = i+1;//������ʱ�±�
        }
        else if (ThisSum > MaxSum) {
            MaxSum = ThisSum;
            left = lsLeft;//�������±�
            right = i;//���±�
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

