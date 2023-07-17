// 0~n까지 더하기 재귀
#include<stdio.h>

int sum(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",sum(n));

    return 0;
}

int sum(int n){
    if(n>0)
        return n + sum(n-1);
    else
        return 0;
}