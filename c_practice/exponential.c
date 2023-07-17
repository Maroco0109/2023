//e^x 의 근삿값 테일러 전개식을 구현하고, 실제 값과 비교
#include<stdio.h>
#include<math.h>

int main(){
    double tmp = 1.;
    double x = 0.1;
    double result = 1.;
    for(int i = 1; i <=10 ; i++){
        tmp = x*tmp/(double)i;
        result += tmp;
    }
    printf("Exponential(my): %.20lf Exponential: %.20lf Diff: %.20lf\n",result,exp(x),fabs(result-exp(x)));

    return 0;
}