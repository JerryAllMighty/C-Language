//
// Created by PC_1M on 2024-03-24.
//


#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main() {
    //2024.03.24
    /* C 언어 실습
     * 선택 제어문과 반복 제어문
     * 예제 4.1
     * 방통대 4-1, C 언어 프로그래밍
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

    //예제 4.2

    int sum = 0, num = 0, i = 0;
    while (i < 5) {
        while (num <= 0) {
            printf("양의 정수를 입력(%d번째)", i + 1);
            scanf("%d", &num);
        }
        sum += num;
        num = 0;
        i++;
    }
    printf("총합 : %d \n", sum);
}
