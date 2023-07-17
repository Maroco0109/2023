#include <iostream>

class Circle{
public:
    int radius;
    double getArea();
};

double Circle::getArea() {return 3.14*radius*radius;}

int main(){
    Circle donut;
    donut.radius = 1;
    std::cout<<donut.getArea()<<'\n';

    Circle pizza;
    pizza.radius = 30;
    std::cout<<pizza.getArea()<<'\n';
}