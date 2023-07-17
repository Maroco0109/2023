#include<iostream>  //C++ processor. 프로그램 처음 시작 시, 전처리기 호출 후 헤더파일 읽고 소스파일 컴파일

double area(int r);
double area(int r){
    return 3.14*r*r;
}

int main(){
    int n = 3;
    char c = '#';
    /*
    cout은 스크린 장치와 연결된 c++ 표준 출력 스트림 객체이다.
    <<연산자는 스트림 삽입 연산자로 오른쪽 피연산자 데이터를 왼쪽 스트림 객체에 삽입한다.
    */
    std::cout<<c<<5.5<<'-'<<n<<"hello"<<true<<std::endl;
    std::cout<<"n + 5 = "<<n+5<<'\n';
    std::cout<<"면적은"<<area(n);
}