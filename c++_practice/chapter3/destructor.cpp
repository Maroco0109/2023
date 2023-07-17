/*
객체 생성 시, 생성자 함수가 실행되는 것처럼, 객체 소멸 시 소멸자 함수가 실행된다.
객체가 소멸할 때 동적 할당받은 메모리를 반환하거나, 파일을 저장하고 닫는 등 객체가 소멸 전에 필요한 조치를 하도록 위해 생성
*/
#include <iostream>

class Circle{
public:
    int radius;
    double getArea();
    Circle();
    Circle(int r);
    ~Circle();  //소멸자 선언
};

//위임 생성자
Circle::Circle() : Circle(1){ }
//타겟 생성자
Circle::Circle(int r){ radius = r; }
//소멸자
Circle::~Circle(){ std::cout<<radius<<" radius Circle destructed."<<'\n';}

double Circle::getArea(){ return 3.14*radius*radius; }

int main(){
    Circle donut;
    double donut_area = donut.getArea();
    std::cout<<donut_area<<'\n';
    Circle pizza(30);
    double pizza_area = pizza.getArea();
    std::cout<<pizza_area<<'\n';

    return 0;   //main 함수 종료 시, 소멸자가 생성되어 함수의 스택에 생성된 객체 소멸
}