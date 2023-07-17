/*
생성자 생성 목적: 초기작업을 위해. (멤버 변수 값 설정, 메모리 동적 할당 등)
*/
#include <iostream>

class Circle{
public:
    int radius;
    double getArea();
    Circle();
    Circle(int r);
};

//매개변수가 없는 생성자
Circle::Circle(){ radius = 1; }
//매개변수가 있는 생성자
Circle::Circle(int r){ radius = r; }
double Circle::getArea(){ return 3.14*radius*radius; }

int main(){
    Circle donut;
    double donut_area = donut.getArea();
    std::cout<<donut_area<<'\n';
    Circle pizza(30);
    double pizza_area = pizza.getArea();
    std::cout<<pizza_area<<'\n';
}