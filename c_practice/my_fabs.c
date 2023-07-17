// math.h의 절댓값 함수가 아닌 사용자 지정 절댓값 함수 작성
#include<stdio.h>
#include<math.h>

int my_fabs(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",my_fabs(n));

    return 0;
}
int my_fabs(int n){
    if(n<0)
        return (-1)*n;
    else
        return n;
}