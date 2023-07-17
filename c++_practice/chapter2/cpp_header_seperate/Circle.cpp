#include <iostream>
#include "circle.h"

Circle::Circle(){
    radius = 1;
    std::cout<<radius<<"가 반지름인 원 생성"<<'\n';
}
Circle::Circle(int r){
    radius = r;
    std::cout<<radius<<"가 반지름인 원 생성"<<'\n';
}
double Circle::getArea(){
    return 3.14*radius*radius;
}