#include <stdio.h>

// C 언어의 자료형에 대한 크기를 나타내는 프로그램
int main() {
    /* C 언어 실습, 출석 수업 과제
     * 예제 1-1 ~ 2-3
     * 방통대 4-1, C 언어 프로그래밍
     * 파일 이름 2-1.c
     * 수정 일자 : 2024년 04월 21일
     * 작성자 : 김윤민, 202334-364307
     */

    printf("char 자료형 크기 : %d byte \n", sizeof(char));
    printf("signed char 자료형 크기 : %d byte \n", sizeof(signed char));
    printf("unsigned char 자료형 크기 : %d byte \n", sizeof(unsigned char));
    printf("short 자료형 크기 : %d byte \n", sizeof(short));
    printf("short int 크기 : %d byte \n", sizeof(short int));
    printf("signed short 자료형 크기 : %d byte \n", sizeof(signed short));
    printf("signed short int 자료형 크기 : %d byte \n", sizeof(signed short int));
    printf("unsigned short 자료형 크기 : %d byte \n", sizeof(unsigned short));
    printf("unsigned short int 자료형 크기 : %d byte \n", sizeof(unsigned short int));
    printf("int 자료형 크기 : %d byte \n", sizeof(int));
    printf("signed int 자료형 크기 : %d byte \n", sizeof(signed int));
    printf("unsigned 자료형 크기 : %d byte \n", sizeof(unsigned));
    printf("unsigned int 자료형 크기 : %d byte \n", sizeof(unsigned int));
    printf("long 자료형 크기 : %d byte \n", sizeof(long));
    printf("long int 자료형 크기 : %d byte \n", sizeof(long int));
    printf("signed long 자료형 크기 : %d byte \n", sizeof(signed long));
    printf("signed long int 자료형 크기 : %d byte \n", sizeof(signed long int));
    printf("unsigned long 자료형 크기 : %d byte \n", sizeof(unsigned long));
    printf("unsigned long int 자료형 크기 : %d byte \n", sizeof(unsigned long int));
    printf("long long 자료형 크기 : %d byte \n", sizeof(long long));
    printf("long long int 자료형 크기 : %d byte \n", sizeof(long long int));
    printf("signed long long 자료형 크기 : %d byte \n", sizeof(signed long long));
    printf("signed long long int 자료형 크기 : %d byte \n", sizeof(signed long long int));
    printf("unsigned long long 자료형 크기 : %d byte \n", sizeof(unsigned long long));
    printf("unsigned long long int 자료형 크기 : %d byte \n", sizeof(unsigned long long int));
    printf("float 자료형 크기 : %d byte \n", sizeof(float));
    printf("double 자료형 크기 : %d byte \n", sizeof(double));
    printf("long double 자료형 크기 : %d byte \n", sizeof(long double));

    return 0; //프로그램이 어떠한 에러 없이 잘 종료가 되엇다는 것을 알리기 위해 0을 리턴
}


