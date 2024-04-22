#include <stdio.h>

//반지름을 입력받아 원의 면적을 구하는 프로그램
#define START "원의 반지름은 구하는 프로그램을 시작합니다. \n"
int r;
#define PI 3.1415926535
#define AREA(X) (PI * (r) * (r))
#define FINISH "원의 면적 구하는 프로그램을 종료합니다."

int main() {
    /* C 언어 실습, 출석 수업 과제
     * 예제 1-1 ~ 2-3
     * 방통대 4-1, C 언어 프로그래밍
     * 파일 이름 2-2.c
     * 수정 일자 : 2024년 04월 21일
     * 작성자 : 김윤민, 202334-364307
     */

    printf("%s \n", START);
    scanf("%d", &r);
    printf("원의 면적은 %10.5f입니다. \n\n", AREA(r));
    printf("%s", FINISH);
    return 0; //프로그램이 어떠한 에러 없이 잘 종료가 되엇다는 것을 알리기 위해 0을 리턴
}


