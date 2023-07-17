// for, while 문 연습
#include<stdio.h>

int main(){
    //1부터 n까지 숫자 더하기
    int n;
    //for문
    int sum1 = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum1 += i;
    printf("%d\n",sum1);

    //while문
    int sum2 = 0;
    int i=0;
    while(i<=n){
        sum2+=i;
        i++;
    }
    printf("%d\n",sum2);
}