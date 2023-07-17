// sin(x)의 테일러 전개식을 통한 값과 실제 sin(x)값 비교

#include<stdio.h>
#include<math.h>

int main(){
    double tmp = 1.;
    double result = 0.;
    double x = 0.1;
    int sign = 1;
    for(int i = 1; i <= 10; ++i){
        tmp = x*tmp/double(i);
        if(i%2==1){
            result = result + sign * tmp;
            sign = - sign;
        }
    }
    printf("my_sin(x): %.20lf sin(x): %.20lf Diff: %.20lf\n",result,sin(x),fabs(result-sin(x)));
}