//
// Created by PC_1M on 2024-03-24.
//


#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main() {
    //2024.03.24
    /* C ��� �ǽ�
     * ���� ����� �ݺ� ���
     * ���� 4.1
     * ����� 4-1, C ��� ���α׷���
     */

    int a, b, c, n;
    printf("maximum value == ?");
    scanf("%d", &n);
    printf("a\tb\tc \n");
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                if (a * a == b * b + c * c) {
                    printf("%d\t%d\t%d\t \n", a, b, c);
                }
            }
        }
    }

    //���� 4.2

    int sum = 0, num = 0, i = 0;
    while (i < 5) {
        while (num <= 0) {
            printf("���� ������ �Է�(%d��°)", i + 1);
            scanf("%d", &num);
        }
        sum += num;
        num = 0;
        i++;
    }
    printf("���� : %d \n", sum);
}
