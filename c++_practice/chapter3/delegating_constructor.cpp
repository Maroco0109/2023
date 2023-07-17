#include <iostream>

class Circle{
public:
    int radius;
    double getArea();
    Circle();
    Circle(int r);
};

//困烙 积己磊
Circle::Circle() : Circle(1){ }
//鸥百 积己磊
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