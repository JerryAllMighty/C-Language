#include <stdio.h> //입출력 함수를 사용하기 위하여 해당 헤더를 포함

//두 수를 키보드로 입력받아 곱의 결과를 출력하는 프로그램이다.

//사용할 변수들과 함수를 선언
int a, b, c; //입력 받을 숫자 a, b와 합계 c, 변수 선언

int multiply(int a, int b); //곱하는 함수

int main() {
    /* C 언어 실습, 출석 수업 과제
     * 예제 1-1 ~ 2-3
     * 방통대 4-1, C 언어 프로그래밍
     * 파일 이름 1-2.c
     * 수정 일자 : 2024년 04월 21일
     * 작성자 : 김윤민, 202334-364307
     */


    printf("First Number Needed \n"); //첫 번째 수를 입력받기 위한 안내 문구 출력
    scanf("%d", &a); // a 입력

    printf("Second Number Needed \n"); //두 번째 수를 입력받기 위한 안내 문구 출력
    scanf("%d", &b); // b 입력

    c = multiply(a, b); //곱하는 합수 호출 후, 곱한 결과를 변수 c에 저장

    printf("%d * %d = %d", a, b, c); // 모든 결과 출력


    return 0; //프로그램이 어떠한 에러 없이 잘 종료가 되엇다는 것을 알리기 위해 0을 리턴
}

int multiply(int a, int b) { //곱하는 함수 정의, 인자로 a와 b를 받음
    return (a * b); //받은 두 인자값을 리턴

}

