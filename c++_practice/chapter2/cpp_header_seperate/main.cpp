#include <iostream>
#include "circle.h"

int main(){
    Circle donut;
    double donut_area = donut.getArea();
    std::cout<<"도넛의 면적은 "<<donut_area<<'\n';

    Circle pizza(30);
    double pizza_area = pizza.getArea();
    std::cout<<"피자의 면적은 "<<pizza_area<<'\n';
}