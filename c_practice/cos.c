// cos(x)의 테일러 전개식을 통한 값과 실제 cos(x)값 비교

#include<stdio.h>
#include<math.h>

int main(){
    double tmp = 1.;
    double x = 0.1;
    double result = 1.;
    int sign = -1;

    for(int i = 1; i<=10; ++i){
        tmp = x*tmp/(double)i;
        if(i%2==0){
            result = result + tmp*sign;
            sign = -sign;
        }
    }

    printf("my_cos: %.20lf cos: %.20lf Diff: %.20lf\n",result, cos(x),fabs(result - cos(x)));
}