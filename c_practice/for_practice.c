// 팩토리얼 함수, 구구단 함수 작성
#include<stdio.h>

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    return result;
}
void gugu(int n){
    for(int i = 1; i <= 9; i++)
        printf("%d x %d = %d\n",n,i,n*i);
}

int main(){
    int n;
    scanf("%d",&n);

    printf("Factorial: %d\n",factorial(n));
    gugu(n);
}