//c or C 입력시 C cruise 출력, b or B 입력시 B battle 출력, 그 외 문자 입력 시 반복 문 탈출

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    char select;
    bool isValid = true;
    while(isValid){                  //for루프는 (초기문; 조건문; 증감문) 형태를 띄지만, 모두 공백일 경우 무한 루프 생성 == while(1){}
        printf("문자를 입력하세요: ");
        scanf("%c",&select);
        if(select=='\n')
            continue;
        switch (select){
        case 'c':
        case 'C':
            printf("C Cruise\n");
            break;
        case 'b':
        case 'B':
            printf("B Battle\n");
            break;
        default:
            printf("Unexpected Error.\n");
            isValid = false;
            break;                      // bool 타입의 isValid 변수를 default에서 false로 바꾸면서 while반복문 탈출
            //exit(1);                  //  exit 함수로 실행중인 함수 강제 종료
        }
    }
}