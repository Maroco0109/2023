#include <iostream>

class Circle{
    int radius;
public:
    Circle(){ radius = 1; }
    Circle(int r){radius = r;}
    double getArea();
};
double Circle::getArea(){
    return 3.14*radius*radius;
}
int main(){
    Circle donut;
    Circle pizza(30);

    //객체 이름으로 멤버 접근
    std::cout<<donut.getArea()<<'\n';

    //객체 포인터로 멤버 접근
    Circle *p;                          //객체에 대한 포인터 변수 선언
    p = &donut;                         //p에 donut 객체의 주소 저장
    std::cout<<p->getArea()<<'\n';      //donut의 getArea() 호출. 포인터로 객체 멤버 함수 호출
    std::cout<<(*p).getArea()<<'\n';    //donut의 getArea() 호출

    p = &pizza;
    std::cout<<p->getArea()<<'\n';      //pizza의 getArea() 호출
    std::cout<<(*p).getArea()<<'\n';    //pizza의 getArea() 호출
}