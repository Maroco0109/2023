// 사용자 팩토리얼 함수 생성
#include<stdio.h>

int my_rec_factorial(int n);
int my_factorial(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("recursive: %d\n",my_rec_factorial(n));
    printf("bottom-up: %d\n",my_factorial(n));

    return 0;
}
// recursive call
int my_rec_factorial(int n){
    if(n>0)
        return n*my_rec_factorial(n-1);
    else
        return 1;
}
// bottom-up call
int my_factorial(int n){
    int result = 1;
    for(int i = 1; i<=n; i++)
        result = result * i;
    return result;
}