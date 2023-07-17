//if practice. condition  -> true or false -> output

#include<stdio.h>

int main(){
    int number;
    printf("정수를 입력하시오: ");
    scanf("%d",&number);
    //1. number < 0
    if(number<0)
        printf("음수입니다.\n");
    else
        printf("양수입니다.\n");
    //2. not(number >= 0)
    if(!(number>=0))
        printf("음수입니다.\n");
    else
        printf("양수입니다.\n");
    //3. number >= 0
    if(number>=0)
        printf("양수입니다.\n");
    else
        printf("음수입니다.\n");
    //4. not(number >= 0)
    if(!(number<0))
        printf("양수입니다.\n");
    else
        printf("음수입니다.\n");

    return 0;
}