#include<iostream>

double area(int r);
double area(int r){
    return 3.14*r*r;
}

int main(){
    int n = 3;
    char c = '#';
    /*
    namespace: c++ 프로그래밍 과정에서 이름(identifier)가 충돌하는 이름충돌을 막기 위한 수단
    클래스, 상수, 변수, 함수의 이름이 중복될 수 있음
    std는 c++ 표준 라이브러리에 선언된 이름이다. <iostream> 내부의 모든 클래스, 객체, 함수는 std namespace를 갖는다
    */
    std::cout<<c<<5.5<<'-'<<n<<"hello"<<true<<std::endl;
    std::cout<<"n + 5 = "<<n+5<<'\n';
    std::cout<<"면적은"<<area(n);
}