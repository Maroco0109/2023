//calculator for celcius and fahrenheit

#include <stdio.h>

int main(){
    double degree;
    char cel;

    //input test 36.5c or 97.7f
    printf("온도: ");
    scanf("%lf%c",&degree,&cel);

    //섭씨 온도가 들어온 경우 화씨 온도로 변환
    if(cel=='c'||cel=='C')
        printf("변환: %.2lff\n",(degree*9/5.)+32.);
    //화씨 온도가 들어온 경우 섭씨 온도로 변환
    else if(cel=='f'||cel=='F')
        printf("변환: %.2lfc\n",(degree-32)*5/9.);
    //의도되지 않은 입력값 입력 시 출력되는 구문
    else
        printf("잘못된 입력값.");

    return 0;
}